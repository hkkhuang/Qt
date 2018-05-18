#include "TTest12_4A.h"
#include "MyDelegate.h"
#include <QListWidgetItem>

TTest12_4A::TTest12_4A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	AddItem("huangkeke");
	AddItem("yzu");

	ui.listWidget->setItemDelegate(new MyDelegate(ui.listWidget));


}
void TTest12_4A::AddItem(QString name)
{
	QListWidgetItem* item = new QListWidgetItem();
	item->setData(Qt::DisplayRole, name);
	item->setFlags(Qt::ItemIsEnabled | Qt::ItemIsEditable);// ╪сио

	ui.listWidget->addItem(item);
}