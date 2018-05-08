#include "TTest12_1A.h"
#include <QMessageBox>

TTest12_1A::TTest12_1A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	if (0)
	{
		//添加数据项
		QIcon icon1(":/TTest12_1A/Resources/heart.jpg");
		ui.listWidget->addItem(new QListWidgetItem(icon1, "heart"));

		QIcon icon2(":/TTest12_1A/Resources/banana.png");
		ui.listWidget->addItem(new QListWidgetItem(icon2, "banana"));

		QIcon icon3(":/TTest12_1A/Resources/book.jpg");
		ui.listWidget->addItem(new QListWidgetItem(icon3, "books"));

	} 
	else
	{
		//添加数据项
		QIcon icon1(":/TTest12_1A/Resources/heart.jpg");
		QListWidgetItem *item = new QListWidgetItem(icon1, "heart"); //QListWidgetItem构造函数不能直接传值创建

		//每个数据项可以关联很多数据
		item->setData(Qt::UserRole, 1);
		item->setData(Qt::ToolTipRole, "this is tooltip");
		ui.listWidget->addItem(item);
	}
	
	connect(ui.btnRemove, SIGNAL(clicked()), this, SLOT(OnbtnRemove()));
	connect(ui.btnChange, SIGNAL(clicked()), this, SLOT(OnbtnChange()));

	connect(ui.listWidget, SIGNAL(itemDoubleClicked(QListWidgetItem *)), this, SLOT(OnItemDbClicked(QListWidgetItem *)));
}

//“切换视图”按钮事件 更改显示模式
int TTest12_1A::OnbtnChange()
{
	if (ui.listWidget->viewMode()==QListWidget::ListMode)
	{
		ui.listWidget->setViewMode(QListView::IconMode);
	} 
	else
	{
		ui.listWidget->setViewMode(QListView::ListMode);
	}

	return 0;
}

//"移除"按钮事件
int TTest12_1A::OnbtnRemove()
{
	//当前选中项
	int row = ui.listWidget->currentRow();

	QListWidgetItem *item = ui.listWidget->takeItem(row);

	if (item)
	{
		delete item; //手工删除
	}
	return 0;
}

//listWidget 数据项双击事件
int TTest12_1A::OnItemDbClicked(QListWidgetItem *item)
{
	//QMessageBox::information(this, "selected", item->text());

	int value = item->data(Qt::UserRole).toInt();
	QMessageBox::information(this, "selected", QString::number(value));

	return 0;
}