#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test5_5A.h"

class Test5_5A : public QMainWindow
{
	Q_OBJECT

public:
	Test5_5A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test5_5AClass ui;
};
