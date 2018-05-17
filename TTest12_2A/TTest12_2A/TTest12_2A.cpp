#include "TTest12_2A.h"
#include <QMessageBox>
TTest12_2A::TTest12_2A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//Model/view 插入数据
	QAbstractItemModel *model = ui.listWidget->model();
	model->insertRow(0);
	model->setData(model->index(0, 0), "heart", Qt::DisplayRole);
	model->setData(model->index(0, 0), 1, Qt::UserRole);

	connect(ui.btnRemove, SIGNAL(clicked()), this, SLOT(OnbtnRemove()));
	connect(ui.listWidget, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this, SLOT(OnItemDbClicked(QListWidgetItem*)));
}


//"移除"按钮事件
int TTest12_2A::OnbtnRemove()
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
int TTest12_2A::OnItemDbClicked(QListWidgetItem *item)
{
	//QMessageBox::information(this, "selected", item->text());

	int value = item->data(Qt::UserRole).toInt();
	QMessageBox::information(this, "selected", QString::number(value));

	return 0;
}


