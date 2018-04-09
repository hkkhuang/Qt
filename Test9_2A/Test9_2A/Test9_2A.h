#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test9_2A.h"

class Test9_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test9_2A(QWidget *parent = Q_NULLPTR);

//添加槽
private slots:
	int OnBtnPage1();
	int OnBtnPage2();
private:
	Ui::Test9_2AClass ui;
};
