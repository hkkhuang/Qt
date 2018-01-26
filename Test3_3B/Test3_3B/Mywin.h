#pragma once

#include <QWidget>
#include "ui_Mywin.h"

class Mywin : public QWidget
{
	Q_OBJECT

public:
	Mywin(QWidget *parent = Q_NULLPTR);
	~Mywin();

private:
	Ui::Mywin ui;
};
