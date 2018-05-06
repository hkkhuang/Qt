#include "MySeekBar.h"
#include <QPainter>
#include <QDebug>
#include <QMouseEvent>

MySeekBar::MySeekBar(QWidget *parent)
	: QFrame(parent)
{
	m_focused = false;
	m_pressed = false;

	m_range = 100;
	m_progress = 0;

	setMouseTracking(true); //开启鼠标移动监听
	setCursor(Qt::PointingHandCursor);//设置鼠标形状-手型
}

MySeekBar::~MySeekBar()
{
}

void MySeekBar::setRange(int range)
{
	m_range = range;
	update();
}

void MySeekBar::setProgress(int progress)
{
	m_progress = progress;
	update();
}

int MySeekBar::range() const
{
	return m_range;
}

int MySeekBar::progress() const
{
	return m_progress;
}

QSize MySeekBar::sizeHint() const
{
	return QSize(100, 20);
}

void MySeekBar::paintEvent(QPaintEvent *event)
{
	QWidget::paintEvent(event);

	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing);

	int width = this->width() - 20;
	int height = this->height();
	int vcenter = height / 2;
	int xoff = 0;

	QColor colorLeft = QColor(40, 150, 210);
	QColor colorRight = QColor(0x88, 0x88, 0x88); //0x888888
	QColor colorHandle = QColor(50, 150, 255);
	QColor colorHandleFrame = QColor(0xcc, 0xcc, 0xcc);

	int position = xoff + m_progress*width / m_range;
	if (!m_focused)
	{
		//细线模式
		QPen pen;
		pen.setWidth(2);  //设置线宽

		//左半段
		pen.setColor(colorLeft);
		painter.setPen(pen);
		painter.drawLine(QPoint(0, vcenter), QPoint(position, vcenter));

		//右半段
		pen.setColor(colorRight);
		painter.setPen(pen);
		painter.setBrush(colorHandle);
		painter.drawLine(QPoint(position, vcenter), QPoint(width, vcenter));

		//小圆球
		pen.setWidth(1);
		pen.setColor(colorHandleFrame);
		painter.setPen(pen);
		painter.setBrush(colorHandle);
		painter.drawEllipse(QPoint(position + 5, vcenter), 5, 5);

	} 
	else
	{
		//粗线模式
		QPen pen;
		pen.setWidth(4);  //设置线宽

		//左半段
		pen.setColor(colorLeft);
		painter.setPen(pen);
		painter.drawLine(QPoint(0, vcenter), QPoint(position, vcenter));

		//右半段
		pen.setColor(colorRight);
		painter.setPen(pen);
		//painter.setBrush(colorHandle);
		painter.drawLine(QPoint(position, vcenter), QPoint(width, vcenter));

		//手柄形状
		pen.setWidth(1);
		pen.setColor(colorHandleFrame);
		painter.setPen(pen);
		painter.setBrush(colorHandle);

		int w = 20;
		int h = 10;
		QRect rectHandle(position, vcenter - h / 2, w, h);
		painter.drawRoundedRect(rectHandle, 4, 4);
	}
}

void MySeekBar::enterEvent(QEvent *event)
{
	qDebug() << "focus in!\n";
	m_focused = true;
	update();
	emit focused(true);
	QWidget::enterEvent(event);
}

void MySeekBar::leaveEvent(QEvent *event)
{
	qDebug() << "focus out!\n";
	m_focused = false;
	update();
	emit focused(false);
	QWidget::leaveEvent(event);
}

void MySeekBar::mouseMoveEvent(QMouseEvent *event)
{
	int progress = position2progress(event->pos().x());
	emit tracking(progress,event->pos());

	QWidget::mouseMoveEvent(event);
}

void MySeekBar::mouseReleaseEvent(QMouseEvent *event)
{
	if (m_pressed)
	{
		m_pressed = false;
		m_progress = position2progress(event->pos().x());
		update();
		emit clicked(m_progress);
	}
}

void MySeekBar::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton) //左击
	{
		m_pressed = true;
	}
}

//position -> progress
int MySeekBar::position2progress(int position)
{
	int width = this->width();
	int xoff = 10;
	position -= xoff;
	if(position<0)
	{
		position = 0;
	}
	else if(position>width)
	{
		position = width;
	}
	return position*m_range / width;
}

//progress -> position
int MySeekBar::progress2position(int progress)
{
	int width = this->width() - 20;
	int xoff = 10;
	return xoff + width*progress / m_range;
}