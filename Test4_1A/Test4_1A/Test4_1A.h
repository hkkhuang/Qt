#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test4_1A.h"

class Test4_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test4_1A(QWidget *parent = Q_NULLPTR);

//��ӳ�Ա����
private slots: 
int OnShowClicked(bool checked);

private:
	Ui::Test4_1AClass ui;
};
