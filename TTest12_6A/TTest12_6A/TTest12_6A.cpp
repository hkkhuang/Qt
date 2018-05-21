#include "TTest12_6A.h"

TTest12_6A::TTest12_6A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// 设置列数
	ui.treeWidget->setColumnCount(4);
	ui.treeWidget->setColumnWidth(0, 100);

	// 标题
	QStringList headers;
	headers.append("Filename");
	headers.append("Last Modified");
	headers.append("Type");
	headers.append("Size");
	ui.treeWidget->setHeaderLabels(headers);

	QIcon icon_folder(":/TTest12_6A/Resources/folder.png");
	QIcon icon_file(":/TTest12_6A/Resources/file.png");

	// 插入数据
	AddItem("aaa.txt", "2015-06-26 07:59:00", "text file", 1242, icon_file);
	AddItem("bbb.mp4", "2015-06-25 14:51:00", "video file", 98990098, icon_file);
	AddItem("ccc.doc", "2015-06-25 07:34:00", "office word file", 7667866, icon_file);

	QTreeWidgetItem* item = AddItem("pictures", "2015-06-25 23:23:00", "folder", 0, icon_folder);
	AddItem("101.txt", "2015-06-26 05:12:00", "text file", 332, icon_file, item);
}

QTreeWidgetItem* TTest12_6A::AddItem(const QString& filename,
	const QString& last_modified,
	const QString& type,
	int size, QIcon icon,
	QTreeWidgetItem* parent)
{
	QTreeWidgetItem* item = new QTreeWidgetItem();
	item->setText(0, filename); // 指定(column, text)
	item->setIcon(0, icon);

	item->setText(1, last_modified);

	item->setText(2, type);

	item->setText(3, QString::number(size));
	item->setData(3, Qt::UserRole, size);

	if (parent)
	{
		// 子节点
		parent->addChild(item);
	}
	else
	{
		// 顶级节点
		ui.treeWidget->addTopLevelItem(item);
	}
	return item;
}