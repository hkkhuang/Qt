#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest12_8A.h"

class TTest12_8A : public QMainWindow
{
	Q_OBJECT

public:
	TTest12_8A(QWidget *parent = Q_NULLPTR);

private:
	void addFile(const QString& name);

private slots:
	int onDeleteRow(QTreeWidgetItem* item);

private:
	Ui::TTest12_8AClass ui;
};
