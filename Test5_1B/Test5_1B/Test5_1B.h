#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test5_1B.h"

class Test5_1B : public QMainWindow
{
	Q_OBJECT

public:
	Test5_1B(QWidget *parent = Q_NULLPTR);
//添加槽
private slots:
int OnCheckChanged();

private:
	Ui::Test5_1BClass ui;
};
