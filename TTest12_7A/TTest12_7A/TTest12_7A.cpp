#include "TTest12_7A.h"
#include <QDir>
#include <QStringList>
#include <QTreeWidgetItem>
#include <QCheckBox>
#include <QDebug>

TTest12_7A::TTest12_7A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.treeWidget->setColumnWidth(0, 40);

	connect(ui.actionDirlist, SIGNAL(triggered()), this, SLOT(OnDirlist()));

	// 指定一个目录
	QDir dir("C:/windows");

	// 搜索*.log和*.dll文件
	QStringList nameFilters;
	// 文件名过滤
	nameFilters << "*.log" << "*.dll";
	QStringList files = dir.entryList(nameFilters);

	for (int i = 0; i < files.size(); i++)
	{
		QString name = files[i];
		qDebug() << "Got: " << name;

		QTreeWidgetItem* item = new QTreeWidgetItem();
		item->setText(1, name);
		// 先add到treewidget里面
		ui.treeWidget->addTopLevelItem(item);

		// 然后才可以setItemWidget
		QCheckBox* checkbox = new QCheckBox();
		ui.treeWidget->setItemWidget(item, 0, checkbox);
	}
}



int TTest12_7A::OnDirlist()
{
	int count = ui.treeWidget->topLevelItemCount();
	for (int i = 0; i < count; i++)
	{
		// 取出item及widget
		QTreeWidgetItem* item = ui.treeWidget->topLevelItem(i);
		QWidget* widget = ui.treeWidget->itemWidget(item, 0);
		QCheckBox* checkbox = (QCheckBox*)widget;

		// 取出widget的用户输入
		if (checkbox->isChecked())
		{
			QString name = item->text(1);
			qDebug() << name;
		}
	}
	return 0;
}