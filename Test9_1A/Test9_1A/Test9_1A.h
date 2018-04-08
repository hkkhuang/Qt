#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test9_1A.h"

class Test9_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test9_1A(QWidget *parent = Q_NULLPTR);

private slots:
	int OnBtnSave();

private:
	Ui::Test9_1AClass ui;
};
