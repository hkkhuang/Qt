#include "MyDelegate.h"
#include <QLineEdit>
#include <QDebug>

MyDelegate::MyDelegate(QObject *parent)
	: QStyledItemDelegate(parent)
{
}

MyDelegate::~MyDelegate()
{
}
// 第1步：创建一个widget作为编辑器
QWidget* MyDelegate::createEditor(QWidget *parent,
	const QStyleOptionViewItem &option,
	const QModelIndex &index) const
{
	qDebug() << "createEditor";
	QLineEdit* editor = new QLineEdit(parent); //创建一个文本框作为编辑器
	return editor;
}

// 第2步：调用编辑器的显示位置
void MyDelegate::updateEditorGeometry(QWidget *editor,
	const QStyleOptionViewItem &option,
	const QModelIndex &index) const
{
	qDebug() << "updateEditorGeometry";
	editor->setGeometry(option.rect);

}


// 第3步：初始化显示数据
void MyDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
	qDebug() << "setEditorData";

	QString text = index.data(Qt::DisplayRole).toString();
	QLineEdit* ed = (QLineEdit*)editor;
	ed->setText(text);
}


// 第四步：用户完成编辑，编辑器被关闭时，提供数据到model
void MyDelegate::setModelData(QWidget *editor,
	QAbstractItemModel *model,
	const QModelIndex &index) const
{
	qDebug() << "setModelData";

	QLineEdit* lineEdit = (QLineEdit*)editor;
	QString value = lineEdit->text();
	model->setData(index, value, Qt::DisplayRole);
}