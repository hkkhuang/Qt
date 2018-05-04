#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest11_7A.h"

class TTest11_7A : public QMainWindow
{
	Q_OBJECT

public:
	TTest11_7A(QWidget *parent = Q_NULLPTR);

//使用MyWidget发射信号
private slots:
	int OnSelected(QRect area);

private:
	Ui::TTest11_7AClass ui;
};
