#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest12_4A.h"

class TTest12_4A : public QMainWindow
{
	Q_OBJECT

public:
	TTest12_4A(QWidget *parent = Q_NULLPTR);

	void AddItem(QString name);
private:
	Ui::TTest12_4AClass ui;
};
