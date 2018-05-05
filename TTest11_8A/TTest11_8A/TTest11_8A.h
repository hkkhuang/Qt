#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest11_8A.h"

class TTest11_8A : public QMainWindow
{
	Q_OBJECT

public:
	TTest11_8A(QWidget *parent = Q_NULLPTR);

private:
	Ui::TTest11_8AClass ui;

private slots:
	int OnSettingsChanged();
};
