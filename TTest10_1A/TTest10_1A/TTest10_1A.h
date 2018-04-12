#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest10_1A.h"
#include <QLineEdit>

class TTest10_1A : public QMainWindow
{
	Q_OBJECT

public:
	TTest10_1A(QWidget *parent = Q_NULLPTR);
private slots:
	int OnMenuNew();
	int OnMenuSave();
	int OnMenuHelp();
	int OnMenuSetting();

private:
	Ui::TTest10_1AClass ui;

	QLineEdit* m_lineEdit;
};
