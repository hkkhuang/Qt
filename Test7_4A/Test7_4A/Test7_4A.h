#pragma once

#include <QtWidgets/QDialog>
#include "ui_Test7_4A.h"

#include "SearchWindow.h"

class Test7_4A : public QDialog
{
	Q_OBJECT

public:
	Test7_4A(QWidget *parent = Q_NULLPTR);

private slots:
	int OnBtnStartSearchClicked();
	int OnStartSearch();

private:
	Ui::Test7_4AClass ui;

	//添加成员变量
	SearchWindow* m_SearchWindow;
};
