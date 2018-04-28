#include "MyWidget.h"
#include <QPainter>
#include <QTimerEvent>
MyWidget::MyWidget(QWidget *parent)
	: QFrame(parent), m_times(0)
{
	//启动定时器,指定时间间隔()单位是微秒
	m_timerId = startTimer(500);
	
}

MyWidget::~MyWidget()
{
}
void MyWidget::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);

	int width = this->width();
	int height = this->height();

	//控制如何绘制外围线条
	painter.setPen(Qt::NoPen);

	//控制如何填充

	if (m_times == 0)
	{
		QBrush brush(QColor(0x00, 0xAA, 0x00));
		painter.setBrush(brush);
		m_times = 1;//设置为在01之间切换
	}
	else
	{
		QBrush brush(QColor(0xAA, 0xBB, 0xCC));
		painter.setBrush(brush);
		m_times = 0;//设置为在01之间切换
	}
	painter.drawEllipse(10, 10, 50, 50);
}

//定时器处理函数
void MyWidget::timerEvent(QTimerEvent* event)
{
	//可以有多个定时器,每个定时器有不同的处理
	if (event->timerId() == m_timerId)
	{
		update(); // 通知重新绘制
	}
}
