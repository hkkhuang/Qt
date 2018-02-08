#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test8_2A.h"

class Test8_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test8_2A(QWidget *parent = Q_NULLPTR);
	// 重写此函数 （继承自QObject)
	virtual void timerEvent(QTimerEvent * event);

private:
	Ui::Test8_2AClass ui;
	int m_timerId; // 每个Timer有一个id
};
