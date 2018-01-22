#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test2_1A.h"

class Test2_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test2_1A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test2_1AClass ui;
};
