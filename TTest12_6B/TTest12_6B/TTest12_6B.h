#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest12_6B.h"

class TTest12_6B : public QMainWindow
{
	Q_OBJECT

public:
	TTest12_6B(QWidget *parent = Q_NULLPTR);

	void AddData(const QString& id, const QString& name, int score);

private:
	Ui::TTest12_6BClass ui;
};
