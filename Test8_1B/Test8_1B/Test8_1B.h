#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test8_1B.h"

class Test8_1B : public QMainWindow
{
	Q_OBJECT

public:
	Test8_1B(QWidget *parent = Q_NULLPTR);

private slots:
	int OnBtnTestClicked();

private:
	Ui::Test8_1BClass ui;
};
