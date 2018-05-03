#include "MyWidget.h"
#include <QPainter>
MyWidget::MyWidget(QWidget *parent)
	: QFrame(parent)
{
	//添加图片资源方式 两种
	//m_picture.load("c:/test.jpg");

	m_picture.load(":/TTest11_5A/Resources/test.jpg");
}

MyWidget::~MyWidget()
{
}

//目标矩阵按照比例填充到源矩阵 返回实际位置target
inline QRect scale(QRect source, QRect target)
{
	//获取目标矩形的长宽
	int target_w = target.width();
	int target_h = target.height();

	//获取源矩形的长宽
	int image_w = source.width();
	int image_h = source.height();

	//特殊处理
	if (image_w <= 0)
	{
		image_w = 1;
	}
	if (image_h <= 0)
	{
		image_h = 1;
	}

	//等比例 缩放
	int scaled_w = target_w; //源
	int scaled_h = image_h * target_w / image_w; //height 根据 源与目标的width比例确定 

	if (scaled_h > target_h)
	{
		scaled_h = target_h;
		scaled_w = target_h*image_w / image_h;
	}

	int x = (target_w - scaled_w) / 2;
	int y = (target_h - scaled_h) / 2;

	return QRect(x, y, scaled_w, scaled_h);
}


void MyWidget::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	//窗体长宽
	int width = this->width();
	int height = this->height();

	//QRect target(0, 0, width / 2, height / 2); //目标矩形
	QRect target(0, 0, width, height); //目标矩形

	//获取到图片的width，height
	int img_width = m_picture.width();
	int img_height = m_picture.height();

	QRect source(0, 0, img_width, img_height);//源矩形 确定绘制图像的哪些部分

	if (0)
	{
		painter.drawPixmap(target, m_picture, source);
	}
	else
	{
		//锁定长宽比
		QRect scaled_target = scale(source, target);
		painter.drawPixmap(scaled_target, m_picture, source);
	}
}
