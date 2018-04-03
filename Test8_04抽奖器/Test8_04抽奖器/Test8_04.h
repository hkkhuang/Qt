#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Test8_04.h"
#include "Source.h"

class Test8_04 : public QMainWindow
{
	Q_OBJECT

public:
	Test8_04(QWidget *parent = Q_NULLPTR);
//Ìí¼Ó²Û
private slots:
	int onEnter();

private:
	Ui::Test8_04Class ui;
	Source m_source;
};
