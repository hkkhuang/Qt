#pragma once

#include <QWidget>
#include "ui_MyPage.h"

class MyPage : public QWidget
{
	Q_OBJECT

public:
	MyPage(QWidget *parent = Q_NULLPTR);
	~MyPage();

private:
	Ui::MyPage ui;
};
