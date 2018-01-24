#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test2_3A.h"

class Test2_3A : public QMainWindow
{
	Q_OBJECT

public:
	Test2_3A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test2_3AClass ui;
};
