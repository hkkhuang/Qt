#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test5_3A.h"

class Test5_3A : public QMainWindow
{
	Q_OBJECT

public:
	Test5_3A(QWidget *parent = Q_NULLPTR);

private slots:
	int OnBtnOKClicked();
	int OnLangChanged(int index);

private:
	Ui::Test5_3AClass ui;
};
