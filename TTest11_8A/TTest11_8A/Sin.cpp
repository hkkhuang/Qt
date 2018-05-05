#include "Sin.h"
#include <QPainter>

Sin::Sin(QWidget *parent)
	: QFrame(parent)
{
	m_period = 20; //周期 
	m_grain = 1; //粒子
	m_radius = 10; //振幅
}

Sin::~Sin()
{
}


QPoint Sin::origin()
{
	QRect r = this->rect();
	return r.center(); //返回中心点
}

//调整参数
void Sin::Adjust(int period, int grain, int radius)
{
	m_period = period;
	m_grain = grain;
	m_radius = radius;

	//参数改变 重新绘制
	update();
}


//GUI坐标系：左上角为原点， x向右增长, y向下增长
//数学坐标系：中心为原点， x向右增长， y向上增加
//Coord是Windows API中定义的一种结构，表示一个字符在控制台屏幕上的坐标。

//将GUI窗口的点(x,y)转换为坐标系统中的点
QPoint Sin::toCoord(QPoint p)
{
	//圆心
	QPoint o = this->origin();
	QPoint result = p - o;
	result.setY(0 - result.y()); //y坐标反转
	return result;
}

//将坐标系中的点(x,y)转换为GUI的坐标
QPoint Sin::fromCoord(QPoint p)
{
	//圆心
	QPoint o = this->origin();
	p.setY(0 - p.y()); //y坐标反转
	return p + o;
}

void Sin::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	
	int width = this->width();
	int height = this->height();

	QRect rect(0, 0, width, height);
	
	painter.setBrush(QColor(0, 0, 0));
	painter.drawRect(rect);

	painter.setPen(QPen(QColor(0, 255, 0)));//画笔颜色:绿色

	QPoint o = origin();
	painter.drawLine(QPoint(0, o.y()), QPoint(width, o.y())); //基线 X轴
	painter.drawLine(QPoint(o.x(), 0), QPoint(o.x(), height)); //基线 Y轴

	//正弦曲线:从坐标原点,向左,向右伸展
	//向右伸展
	//采取方法是曲线由小线段组成
	QPoint p1(0, 0);
	for (int x=0; x<width/2; x+=m_grain)
	{
		//y=sin(x)
		double angle = (double)x / m_period * 2 * 3.1415926;
		double y = m_radius*sin(angle);
		QPoint p2(x, y);
		//右侧
		painter.drawLine(fromCoord(p1), fromCoord(p2));
		//左侧
		QPoint base(0, 0);
		painter.drawLine(fromCoord(base - p1), fromCoord(base - p2));
		
		p1 = p2;
	}

}