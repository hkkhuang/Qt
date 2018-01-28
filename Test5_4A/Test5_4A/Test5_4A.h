#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test5_4A.h"

class Test5_4A : public QMainWindow
{
	Q_OBJECT

public:
	Test5_4A(QWidget *parent = Q_NULLPTR);

//添加槽
private slots:
	int OnBtnHelpClicked();	
	int OnBtnHelpChanged(bool);

private:
	Ui::Test5_4AClass ui;
};
