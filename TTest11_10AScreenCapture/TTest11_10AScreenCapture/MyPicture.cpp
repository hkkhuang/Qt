#include "MyPicture.h"
#include "MyScaler.h"
#include <QPainter>

MyPicture::MyPicture(QWidget *parent)
	: QFrame(parent)
{
}

MyPicture::~MyPicture()
{
}

void MyPicture::display(const QString& imageFile)
{
	m_picture.load(imageFile);
	update();
}

void MyPicture::display(const QPixmap& pixmap)
{
	m_picture = pixmap;
	update();
}

void MyPicture::paintEvent(QPaintEvent * event)
{
	// ���ø��໭һ��
	QPainter painter(this);
	QRect target = this->rect();
	target.adjust(2, 2, -2, -2);// ��СһȦ

	painter.setPen(QColor(0x33, 0x33, 0x33));
	painter.setBrush(QColor(0xFF, 0xFF, 0xFF));
	painter.drawRect(target);

	target.adjust(2, 2, -2, -2);// ��СһȦ
	if (!m_picture.isNull())
	{
		QRect source = m_picture.rect();
		QRect fit = MyScaler::scale(source, target);
		painter.drawPixmap(fit, m_picture, source);
	}
}
