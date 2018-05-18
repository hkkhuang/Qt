#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest12_5A.h"

class TTest12_5A : public QMainWindow
{
	Q_OBJECT

public:
	TTest12_5A(QWidget *parent = Q_NULLPTR);

private slots:
	int OnListContextMenu(const QPoint& pt);

	int OnMenuAdd();
	int OnMenuRemove();

private:
	Ui::TTest12_5AClass ui;
};
