#include "TTest12_3A.h"
#include <QListWidgetItem>
#include "MyItemDrawer.h"

TTest12_3A::TTest12_3A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// �������
	AddItem("Mark", "18790009000", false);
	AddItem("Milly", "18780008000", false);
	AddItem("Tom", "13800010000", true);
	AddItem("Rose", "13800020000", true);

	// ʹ���Զ����ͼ
	ui.listWidget->setItemDelegate(new MyItemDrawer(ui.listWidget));
}


void TTest12_3A::AddItem(QString name, QString phone, bool male)
{
	QListWidgetItem* item = new QListWidgetItem();
	item->setData(Qt::DisplayRole, name);
	item->setData(Qt::UserRole + 1, phone);
	item->setData(Qt::UserRole + 2, male);
	ui.listWidget->addItem(item);
}
