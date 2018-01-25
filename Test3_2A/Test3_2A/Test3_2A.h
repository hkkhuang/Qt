#pragma once

#include <QtWidgets/QWidget>
#include "ui_Test3_2A.h"

class Test3_2A : public QWidget
{
	Q_OBJECT

public:
	Test3_2A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test3_2AClass ui;
};
