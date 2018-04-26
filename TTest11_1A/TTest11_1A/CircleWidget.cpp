#include "CircleWidget.h"
#include <QPainter>

CircleWidget::CircleWidget(QWidget *parent)
	: QFrame(parent)
{
}

CircleWidget::~CircleWidget()
{
}

//定义画圆函数
void CircleWidget::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
	int width = this->width();
	int height = this->height();
	painter.setBrush(QBrush(QColor(0x33, 0x66, 0x99)));
	//painter.drawEllipse(QPoint(100, 100), 100, 100);
	painter.drawEllipse(0, 0, width, height);
}