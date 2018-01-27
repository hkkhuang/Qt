#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test5_1A.h"

class Test5_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test5_1A(QWidget *parent = Q_NULLPTR);
//Ìí¼Ó²Û
private slots:
	int OnBtnOKClicked();

private:
	Ui::Test5_1AClass ui;
};
