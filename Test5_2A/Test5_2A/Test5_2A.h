#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test5_2A.h"

class Test5_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test5_2A(QWidget *parent = Q_NULLPTR);

//添加槽
private slots:
	int OnBtnOKClicked();
	int OnReturnPressed();

private:
	Ui::Test5_2AClass ui;
};
