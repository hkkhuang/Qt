#include "TTest12_5A.h"
#include <QListWidgetItem>
#include <QMenu>

TTest12_5A::TTest12_5A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// 添加数据项
	ui.listWidget->addItem("book");
	ui.listWidget->addItem("heart");
	ui.listWidget->addItem("location");

	// 右键菜单支持
	ui.listWidget->setContextMenuPolicy(Qt::CustomContextMenu);

	connect(ui.listWidget, SIGNAL(customContextMenuRequested(const QPoint&)),
		this, SLOT(OnListContextMenu(const QPoint&)));

	// 右键菜单的命令处理
	connect(ui.actionAdd, SIGNAL(triggered()),
		this, SLOT(OnMenuAdd()));
	connect(ui.actionRemove, SIGNAL(triggered()),
		this, SLOT(OnMenuRemove()));
}


int TTest12_5A::OnListContextMenu(const QPoint& pt)
{
	// 当前选中项
	QListWidgetItem* selected = ui.listWidget->itemAt(pt);
	int row = ui.listWidget->currentRow();

	// 构造菜单及菜单项
	QMenu menu;
	menu.addAction(ui.actionAdd);

	if (selected)
	{
		menu.addAction(ui.actionRemove);
	}

	// 显示菜单
	menu.exec(ui.listWidget->mapToGlobal(pt));

	return 0;
}

int TTest12_5A::OnMenuAdd()
{
	QListWidgetItem* item = new QListWidgetItem();
	item->setText("New Item");
	ui.listWidget->addItem(item);

	return 0;
}

int TTest12_5A::OnMenuRemove()
{
	int row = ui.listWidget->currentRow();
	QListWidgetItem* item = ui.listWidget->takeItem(row);
	if (item)
	{
		delete item;
	}
	return 0;
}