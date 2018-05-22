#include "TTest12_6B.h"

TTest12_6B::TTest12_6B(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.tableWidget->setColumnCount(3);

	// 设置水平方向的标题
	QStringList headers;
	headers.append("id");  // 学号
	headers.append("name"); //姓名
	headers.append("score"); // 成绩
	ui.tableWidget->setHorizontalHeaderLabels(headers);

	AddData("MZ121070001", "Tom", 99);
	AddData("MZ121070001", "Jarry", 88);
	AddData("MZ121070001", "Mark", 77);
}



void TTest12_6B::AddData(const QString& id, const QString& name, int score)
{
	int row = ui.tableWidget->rowCount();
	ui.tableWidget->insertRow(row);

	// id
	QTableWidgetItem* item = new QTableWidgetItem();
	item->setText(id);
	ui.tableWidget->setItem(row, 0, item);

	// name
	item = new QTableWidgetItem();
	item->setText(name);
	ui.tableWidget->setItem(row, 1, item);

	// score
	item = new QTableWidgetItem();
	item->setText(QString::number(score));
	ui.tableWidget->setItem(row, 2, item);
}