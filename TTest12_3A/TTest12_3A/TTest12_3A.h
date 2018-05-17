#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest12_3A.h"

class TTest12_3A : public QMainWindow
{
	Q_OBJECT

public:
	TTest12_3A(QWidget *parent = Q_NULLPTR);


	//AddItem
	void AddItem(QString name, QString phone, bool male);

private:
	Ui::TTest12_3AClass ui;
};
