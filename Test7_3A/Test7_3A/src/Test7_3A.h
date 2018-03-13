#pragma once

#include <QtWidgets/QWidget>
#include "ui_Test7_3A.h"

class Test7_3A : public QWidget
{
	Q_OBJECT //

public:
	Test7_3A(QWidget *parent = Q_NULLPTR);

private:
	Ui::Test7_3AClass ui;
};
