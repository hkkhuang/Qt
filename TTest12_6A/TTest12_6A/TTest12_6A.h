#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TTest12_6A.h"
#include <QTreeWidgetItem>

class TTest12_6A : public QMainWindow
{
	Q_OBJECT

public:
	TTest12_6A(QWidget *parent = Q_NULLPTR);

	// ���ظող�����½ڵ�
	QTreeWidgetItem* AddItem(const QString& filename,
		const QString& last_modified,
		const QString& type,
		int size, QIcon icon,
		QTreeWidgetItem* parent = NULL); // ���ڵ�
private:
	Ui::TTest12_6AClass ui;
};
