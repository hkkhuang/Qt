#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest10_2A.h"
#include <QLabel>
class TTest10_2A : public QMainWindow
{
	Q_OBJECT

public:
	TTest10_2A(QWidget *parent = Q_NULLPTR);

private slots:
	int OnMenuNew();
	int OnMenuOpen();
	int OnMenuSave();

private:
	Ui::TTest10_2AClass ui;

	QString m_filepath; //�ļ���
	QLabel* m_label;//״̬����ʾ �ļ���
	QLabel* m_labelStatus;//״̬����ʾ �ļ���
};
