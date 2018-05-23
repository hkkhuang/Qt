#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest12_7A.h"

class TTest12_7A : public QMainWindow
{
	Q_OBJECT

public:
	TTest12_7A(QWidget *parent = Q_NULLPTR);

private slots:
	int OnDirlist();

private:
	Ui::TTest12_7AClass ui;
};
