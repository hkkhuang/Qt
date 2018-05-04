#include "MyWidget.h"
#include <QPainter>

MyWidget::MyWidget(QWidget *parent)
	: QFrame(parent)
{
	m_pressedFlag = false;
	m_picture.load(":/TTest11_7A/Resources/MorningLake.jpg"); //构造函数中只加载一次
}

MyWidget::~MyWidget()
{
}

void MyWidget::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);

	int width = this->width();
	int height = this->height();

	//显示背景图片
	painter.drawPixmap(0, 0, width, height,m_picture);

	//画出区域
	if (m_pressedFlag)
	{
		painter.setPen(QColor(0xff, 0xff, 0xff));
		//绘制十字交叉线
		painter.drawLine(QPoint(0, m_curPos.y()), QPoint(width, m_curPos.y())); //画一条水平线
		painter.drawLine(QPoint(m_curPos.x(),0), QPoint(m_curPos.x(),height)); //画一条竖直线

	}

	//计算选中区域
	QRect selected(m_start, m_end);

	
	if (0)
	{
		//普通画法
		painter.setBrush(QColor(0xF0, 0xF0, 0xF0));
		painter.drawRect(selected);
	}
	else
	{
		//透明度画法
		QRect full(0, 0, width, height);
		painter.setBrush(QColor(0, 0, 0, 100));
		painter.setClipRegion(QRegion(full) - QRegion(selected));
		painter.drawRect(full);
	}
}

//鼠标移动
void MyWidget::mouseMoveEvent(QMouseEvent *event)
{
	if (m_pressedFlag)
	{
		m_curPos = event->pos(); //鼠标当前位置
		//鼠标移动过程中记录结束点坐标
		m_end = event->pos();
		update(); //重绘
	}
}

//鼠标按下
void MyWidget::mousePressEvent(QMouseEvent *event)
{
	m_pressedFlag = true;

	//按下鼠标记录开始点坐标
	m_start = m_end = event->pos();
}

//鼠标释放
void MyWidget::mouseReleaseEvent(QMouseEvent *event)
{
	m_pressedFlag = false;
	update(); //重绘

	//释放鼠标记录结束点坐标
	//m_end = event->pos();

	//用户结束选区时 发射事件
	QRect area(m_start, m_end);
	emit selected(area);

}