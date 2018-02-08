#include "Test8_2A.h"
#include <QTime>
#include <QDebug>

Test8_2A::Test8_2A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	// 启动定时器, 指定时间间隔(毫秒） 
	m_timerId = startTimer(1000);

}



// 定时器处理函数
void Test8_2A::timerEvent(QTimerEvent * event)
{
	// 可以有多个定时器，每个的定时器有不同的处理
	if (event->timerId() == m_timerId)
	{
		QTime now = QTime::currentTime();
		QString text = now.toString("HH:mm:ss");
		//qDebug() << text;

		ui.labelTime->setText(text);

	}

}
