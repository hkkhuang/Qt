#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest12_2A.h"

class TTest12_2A : public QMainWindow
{
	Q_OBJECT

public:
	TTest12_2A(QWidget *parent = Q_NULLPTR);

private slots:
	int OnbtnRemove(); //“移除”按钮
	
	//双击 事件的相应
	int OnItemDbClicked(QListWidgetItem *item);

private:
	Ui::TTest12_2AClass ui;
};
