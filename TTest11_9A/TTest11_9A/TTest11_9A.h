#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest11_9A.h"
#include "MyOverLay.h" //¸¡¶¯ÏÔÊ¾´°¿Ú

class TTest11_9A : public QMainWindow
{
	Q_OBJECT

public:
	TTest11_9A(QWidget *parent = Q_NULLPTR);

private:
	Ui::TTest11_9AClass ui;
	MyOverLay *m_tooltip;

private slots:
	int onSeekFocused(bool yes);
	int onSeekClicked(int progress);
	int onSeekTracking(int progress, QPoint pos);
};
