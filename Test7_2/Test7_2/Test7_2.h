#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test7_2.h"

class Test7_2 : public QMainWindow
{
	Q_OBJECT

public:
	Test7_2(QWidget *parent = Q_NULLPTR);

private slots:
	int OnBtnOpenCLicked();
	int OnBtnSaveClicked();

private:
	Ui::Test7_2Class ui;
};
