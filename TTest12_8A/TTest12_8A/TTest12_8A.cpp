#include "TTest12_8A.h"
#include "CellWidget.h"

TTest12_8A::TTest12_8A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	addFile("Tom.txt");
	addFile("Jerry.txt");
	addFile("Mark.txt");
}
void TTest12_8A::addFile(const QString& name)
{
	QTreeWidgetItem* item = new QTreeWidgetItem();
	item->setText(0, name);
	ui.treeWidget->addTopLevelItem(item);

	CellWidget* widget = new CellWidget(item);
	ui.treeWidget->setItemWidget(item, 1, widget);
	widget->setAutoFillBackground(true);
	// 响应cell widget的自定义信号
	connect(widget, SIGNAL(userDelete(QTreeWidgetItem*)),
		this, SLOT(onDeleteRow(QTreeWidgetItem*)));

}

int TTest12_8A::onDeleteRow(QTreeWidgetItem* item)
{
	int index = ui.treeWidget->indexOfTopLevelItem(item);
	ui.treeWidget->takeTopLevelItem(index);
	delete item;
	return 0;
}
