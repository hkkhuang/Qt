#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest10_3A.h"

class TTest10_3A : public QMainWindow
{
	Q_OBJECT

public:
	TTest10_3A(QWidget *parent = Q_NULLPTR);

private slots:
	int OnBtnSearch();

private:
	Ui::TTest10_3AClass ui;
};
