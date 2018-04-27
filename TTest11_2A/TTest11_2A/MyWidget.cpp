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
	painter.drawRect(0, 0, width, height); //�����������λ��ɫ

	//������λ������� ������ɫ
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

	//�������е�ͬ���������Ч��
	//QPen pen;  // creates a default pen
	//pen.setStyle(Qt::DashDotLine);
	//pen.setWidth(3);
	//pen.setBrush(Qt::green);
	//pen.setCapStyle(Qt::RoundCap);
	//pen.setJoinStyle(Qt::RoundJoin);
	//painter.setPen(pen);

	//���������� ������ɫ
	QBrush brush(QColor(0x00, 0x99, 0x00)); //ʹ����������
	painter.setBrush(brush);

	//��һ������
	painter.drawRect(20, 20, 200, 100); //���Ͻ�����,��,��
	painter.drawRect(40, 40, 200, 100); //���Ͻ�����,��,��
	//Ĭ������£��󻭵����ݸ����Ȼ������ݡ�
	//�������� �Ȼ���һ���ͻ���һ����ľ���,���ɫΪ��ɫ
	//�������ٻ��ľ��ζ������һ����ľ����ϻ���,�Դ���ν����˸���
	//�ٻ�һ����ͬ��С����,�鿴Ч��,���Եô˽���

}