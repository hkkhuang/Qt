#include "MyOverLay.h"
#include <QPainter>

MyOverLay::MyOverLay(QWidget *parent)
	: QWidget(parent)
{
	setWindowFlags(Qt::ToolTip);
	setAttribute(Qt::WA_TranslucentBackground);
}

MyOverLay::~MyOverLay()
{
}

void MyOverLay::setText(const QString &text)
{
	m_text = text;
	update();
}

void MyOverLay::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing);

	//设置背景
	int w = this->width();
	int h = this->height();
	painter.setPen(QColor(0, 0, 0));
	painter.setBrush(QColor(0xFF, 0xFF, 0xFF,0xAA));
	painter.drawRect(0, 0, w, h);

	//显示文本：所选区域大小
	QFont font = painter.font();
	font.setPixelSize(14);
	painter.setFont(font);

	painter.setPen(QPen(QColor(0x33, 0x33, 0x33)));
	QRect textRect(0, 0, w, h);
	painter.drawText(textRect, Qt::AlignCenter, m_text);

}