#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test7_1A.h"

class Test7_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test7_1A(QWidget *parent = Q_NULLPTR);

//添加槽
private slots:
	int OnBtnLoginClicked();

private:
	Ui::Test7_1AClass ui;
};
