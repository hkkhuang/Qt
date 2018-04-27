#include "MyWidget.h"
#include <QPainter>
MyWidget::MyWidget(QWidget *parent)
	: QFrame(parent)
{
}

MyWidget::~MyWidget()
{
}

void MyWidget::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);

	int width = this->width();
	int height = this->height();

	painter.setBrush(QBrush(QColor(0xFF, 0xFF, 0xFF)));
	painter.drawRect(0, 0, width, height); //整个画板填充位白色

	//控制如何绘制线条 设置颜色
	//QColor blue(0x00, 0x00, 0xBB);
	//QPen pen(blue);
	//painter.setPen(pen);

	//A pen has a style(), width(), brush(), capStyle() and joinStyle().
	//The pen style defines the line type.
	//The brush is used to fill strokes generated with the pen.
	//Use the QBrush class to specify fill styles.
	//The cap style determines the line end caps that can be drawn using QPainter, 
	//while the join style describes how joins between two lines are drawn.
	//The pen width can be specified in both integer(width()) and floating point(widthF()) precision.
	//A line width of zero indicates a cosmetic pen.
	//This means that the pen width is always drawn one pixel wide, independent of the transformation set on the painter.

	//The default pen is a solid black brush with 1 width, square cap style(Qt::SquareCap), and bevel join style(Qt::BevelJoin).
	//In addition QPen provides the color() and setColor() convenience functions to extract and set the color of the pen's brush, respectively. Pens may also be compared and streamed.
	
	QPen pen(Qt::green, 3, Qt::DashDotLine, Qt::RoundCap, Qt::RoundJoin);
	painter.setPen(pen);

	//上面两行等同于下面代码效果
	//QPen pen;  // creates a default pen
	//pen.setStyle(Qt::DashDotLine);
	//pen.setWidth(3);
	//pen.setBrush(Qt::green);
	//pen.setCapStyle(Qt::RoundCap);
	//pen.setJoinStyle(Qt::RoundJoin);
	//painter.setPen(pen);

	//控制如何填充 设置颜色
	QBrush brush(QColor(0x00, 0x99, 0x00)); //使用无名参数
	painter.setBrush(brush);

	//画一个矩形
	painter.drawRect(20, 20, 200, 100); //左上角坐标,长,宽
	painter.drawRect(40, 40, 200, 100); //左上角坐标,长,宽
	//默认情况下，后画的内容覆盖先画的内容。
	//根据以上 先画了一个和画板一样大的矩形,填充色为白色
	//接下来再画的矩形都是这第一个大的矩形上画的,对大矩形进行了覆盖
	//再画一个相同的小矩形,查看效果,可以得此结论

}