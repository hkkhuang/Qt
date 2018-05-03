#include "MyWidget.h"
#include <QPainter>
#include <QPoint>
#include <QMouseEvent>
#include <QDebug>
MyWidget::MyWidget(QWidget *parent)
	: QFrame(parent)
{
	m_pressedFlag = false;
}

MyWidget::~MyWidget()
{
}

void MyWidget::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);

	int width = this->width();
	int height = this->height();

	//绘画轨迹
	//背景 设置为黑色
	painter.setBrush(QColor(0x00, 0x00, 0x00));
	painter.drawRect(0, 0, width, height);

	painter.setPen(QColor(0xFF, 0xFF, 0xFF));

	if (m_pressedFlag)
	{
		for (int i=0; i < m_points.size()-1;i++)
		{
			QPoint p1 = m_points[i];
			QPoint p2 = m_points[i + 1];

			painter.drawLine(p1, p2);
		}
	}

}

void MyWidget::mouseDoubleClickEvent(QMouseEvent *event)
{
	QWidget::mouseDoubleClickEvent(event);
}


void MyWidget::mouseMoveEvent(QMouseEvent *event)
{
	if (m_pressedFlag)
	{
		QPoint points = event->pos();
		m_points.append(points);
		qDebug("(%d,%d)", points.x(),points.y());

		update();  //重绘图形
	}
}

//按下鼠标事件
void MyWidget::mousePressEvent(QMouseEvent *event)
{
	m_pressedFlag = true;
	m_points.clear();//清空一下
}
//释放鼠标事件(松开鼠标)
void MyWidget::mouseReleaseEvent(QMouseEvent *event)
{
	m_pressedFlag = false;
}