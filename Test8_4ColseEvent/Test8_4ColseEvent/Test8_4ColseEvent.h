#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test8_4ColseEvent.h"

class Test8_4ColseEvent : public QMainWindow
{
	Q_OBJECT

public:
	Test8_4ColseEvent(QWidget *parent = Q_NULLPTR);

	//÷ÿ–¥closeEvent()
	void closeEvent(QCloseEvent* event);

private:
	Ui::Test8_4ColseEventClass ui;
};
