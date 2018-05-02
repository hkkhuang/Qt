#pragma once

#include <QFrame>
#include <QPixmap>

class MyWidget : public QFrame
{
	Q_OBJECT

public:
	MyWidget(QWidget *parent);
	~MyWidget();

private:
	void paintEvent(QPaintEvent *event);

private:
	QPixmap m_picture;
};
