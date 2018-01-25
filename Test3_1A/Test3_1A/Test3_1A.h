#pragma once

#include <QtWidgets/QWidget>
#include "ui_Test3_1A.h"

class Test3_1A : public QWidget
{
	Q_OBJECT

public:
	Test3_1A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test3_1AClass ui;
};
