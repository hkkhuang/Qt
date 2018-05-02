#include "MyWidget.h"
#include <QPainter>
MyWidget::MyWidget(QWidget *parent)
	: QFrame(parent)
{
	//m_picture.load("c:/test.jpg");

	m_picture.load(":/TTest11_5A/Resources/test.jpg");
}

MyWidget::~MyWidget()
{
}

//Ŀ������ձ�����䵽Դ���� ����ʵ��λ��target
inline QRect scale(QRect source, QRect target)
{
	//��ȡĿ����εĳ���
	int target_w = target.width();
	int target_h = target.height();

	//��ȡԴ���εĳ���
	int image_w = source.width();
	int image_h = source.height();

	//���⴦��
	if (image_w <= 0)
	{
		image_w = 1;
	}
	if (image_h <= 0)
	{
		image_h = 1;
	}

	//�ȱ��� ����
	int scaled_w = target_w; //Դ
	int scaled_h = image_h * target_w / image_w; //height ���� Դ��Ŀ���width����ȷ�� 

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
	//���峤��
	int width = this->width();
	int height = this->height();

	//QRect target(0, 0, width / 2, height / 2); //Ŀ�����
	QRect target(0, 0, width, height); //Ŀ�����

	//��ȡ��ͼƬ��width��height
	int img_width = m_picture.width();
	int img_height = m_picture.height();

	QRect source(0, 0, img_width, img_height);//Դ���� ȷ������ͼ�����Щ����

	if (0)
	{
		painter.drawPixmap(target, m_picture, source);
	}
	else
	{
		//���������
		QRect scaled_target = scale(source, target);
		painter.drawPixmap(scaled_target, m_picture, source);
	}
}
