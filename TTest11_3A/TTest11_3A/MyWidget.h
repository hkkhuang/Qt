#pragma once

#include <QFrame>

class MyWidget : public QFrame
{
	Q_OBJECT

public:
	MyWidget(QWidget *parent);
	~MyWidget();

private:
	void paintEvent(QPaintEvent* event);
	void timerEvent(QTimerEvent* event);

private:
	int m_timerId;//每个Timer有一个id
	int m_times;
};
