#pragma once

#include <QStyledItemDelegate>

class MyDelegate : public QStyledItemDelegate
{
	Q_OBJECT

public:
	MyDelegate(QObject *parent);
	~MyDelegate();

private:
	// 第1步：创建一个widget作为编辑器
	QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
		const QModelIndex &index) const;

	// 第2步：调用编辑器的显示位置
	void updateEditorGeometry(QWidget *editor,
		const QStyleOptionViewItem &option, const QModelIndex &index) const;

	// 第3步：初始化显示数据
	void setEditorData(QWidget *editor, const QModelIndex &index) const;

	// -------------------------

	// 第4步：用户完成编辑、编辑器被关闭时，提供数据到model
	void setModelData(QWidget *editor, QAbstractItemModel *model,
		const QModelIndex &index) const;
};
