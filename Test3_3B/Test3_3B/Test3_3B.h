#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test3_3B.h"

class Test3_3B : public QMainWindow
{
	Q_OBJECT

public:
	Test3_3B(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test3_3BClass ui;
};
