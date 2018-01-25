#pragma once

#include <QtWidgets/QWidget>
#include "ui_Test3_3A.h"

class Test3_3A : public QWidget
{
	Q_OBJECT

public:
	Test3_3A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test3_3AClass ui;
};
