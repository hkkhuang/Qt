#pragma once

#include <QDialog>
#include "ui_DlgTest.h"

class DlgTest : public QDialog
{
	Q_OBJECT

public:
	DlgTest(QWidget *parent = Q_NULLPTR);
	~DlgTest();

private:
	Ui::DlgTest ui;
};
