#pragma once

#include <QStyledItemDelegate>
#include <QIcon>

class MyItemDrawer : public QStyledItemDelegate
{
	Q_OBJECT

public:
	MyItemDrawer(QObject *parent);
	~MyItemDrawer();

private:
	// 决定该单元格的推荐大小
	virtual QSize  sizeHint(const QStyleOptionViewItem & option,
		const QModelIndex & index) const;

	// 决定如何绘图
	virtual void  paint(QPainter * painter,
		const QStyleOptionViewItem & option,
		const QModelIndex & index) const;


private:
	QPixmap m_iconMale, m_iconFemale;
};
