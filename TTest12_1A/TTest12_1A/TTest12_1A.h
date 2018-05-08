#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest12_1A.h"

class TTest12_1A : public QMainWindow
{
	Q_OBJECT

public:
	TTest12_1A(QWidget *parent = Q_NULLPTR);

private slots:
	int OnbtnChange(); //"切换视图"按钮
	int OnbtnRemove(); //“移除”按钮

	//双击 事件的相应
	int OnItemDbClicked(QListWidgetItem *item);

private:
	Ui::TTest12_1AClass ui;
};
