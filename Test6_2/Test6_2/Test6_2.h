#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test6_2.h"

class Test6_2 : public QMainWindow
{
	Q_OBJECT

public:
	Test6_2(QWidget *parent = Q_NULLPTR);

private slots:
	int OnBtnTestClicked();

private:
	Ui::Test6_2Class ui;
};
