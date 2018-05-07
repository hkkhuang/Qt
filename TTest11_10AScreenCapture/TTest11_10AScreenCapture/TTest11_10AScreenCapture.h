#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest11_10AScreenCapture.h"

class TTest11_10AScreenCapture : public QMainWindow
{
	Q_OBJECT

public:
	TTest11_10AScreenCapture(QWidget *parent = Q_NULLPTR);

private slots:
	int onCapture();
	int onSave();
	int onDelayedCapture();

private:
	Ui::TTest11_10AScreenCaptureClass ui;
};
