#include "TTest12_6B.h"

TTest12_6B::TTest12_6B(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.tableWidget->setColumnCount(3);
	//设置水平方向的标题

	QStringList headers;
	headers.append("id");
	headers.append("name");
	headers.append("score");
	ui.tableWidget->setHorizontalHeaderLabels(headers);

	AddData("MZ12017001", "Tom", 99);
	AddData("MZ12017002", "Jarry", 88);
	AddData("MZ12017003", "Mark", 77);
}

void TTest12_6B::AddData(const QString& id, const QString& name, int score)
{
	int row = ui.tableWidget->rowCount();
	ui.tableWidget->insertRow(row);

	//id
	QTableWidgetItem* item = new QTableWidgetItem();
	item->setText(id);
	ui.tableWidget->setItem(row, 0, item);


	//name
	item = new QTableWidgetItem();
	item->setText(name);
	ui.tableWidget->setItem(row, 1, item);


	//id
	item = new QTableWidgetItem();
	item->setText(QString::number(score));
	ui.tableWidget->setItem(row, 2, item);
}