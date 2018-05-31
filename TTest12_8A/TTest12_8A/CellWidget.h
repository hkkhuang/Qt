#pragma once

#include <QWidget>
#include "ui_CellWidget.h"
#include <QTreeWidgetItem>

class CellWidget : public QWidget
{
	Q_OBJECT

//定义信号
signals:
	int userDelete(QTreeWidgetItem* rowid);

public:
	//响应 【删除】按钮 使用QTreeWidgetItem* rowid 定位
	CellWidget(QTreeWidgetItem* rowid, QWidget *parent = Q_NULLPTR);
	~CellWidget();

//定义槽
private slots:
	int onBtnDelete();

private:
	Ui::CellWidget ui;
	QTreeWidgetItem* rowid;
};
