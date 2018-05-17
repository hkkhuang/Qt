#include "MyItemDrawer.h"
#include <QStyledItemDelegate>
#include <QPainter>

MyItemDrawer::MyItemDrawer(QObject *parent)
	: QStyledItemDelegate(parent)
	, m_iconMale(":/TTest12_3A/Resources/male.png")  // 加载图片
	, m_iconFemale(":/TTest12_3A/Resources/female.png")
{
}

MyItemDrawer::~MyItemDrawer()
{
}
void  MyItemDrawer::paint(QPainter * painter,
	const QStyleOptionViewItem & option,
	const QModelIndex & index) const
{
	//QStyledItemDelegate::paint(painter, option, index);

	QRect rect = option.rect; // 目标矩形
	rect.adjust(2, 2, -2, -2); // 缩小一圈，留出空白间隔

							   // 取得该项对应的数据
	QString name = index.data(Qt::DisplayRole).toString();
	QString phone = index.data(Qt::UserRole + 1).toString();
	bool male = index.data(Qt::UserRole + 2).toBool();

	// 状态显示: 若该项被选中
	if (option.state & QStyle::State_Selected)
	{
		painter->setBrush(QColor(0xCC, 0xAA, 0xAA));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}

	// 性别显示
	if (1)
	{
		QRect dst = rect;
		dst.setRight(rect.left() + 40);
		QRect area(0, 0, 24, 24);
		area.moveCenter(dst.center());
		painter->drawPixmap(area, male ? m_iconMale : m_iconFemale);

	}

	// name 显示
	if (1)
	{
		QRect dst = rect;
		dst.setLeft(rect.left() + 40);
		dst.setBottom(rect.top() + 20);
		painter->drawText(dst, Qt::AlignLeft | Qt::AlignVCenter, name);
	}

	// phone显示
	if (1)
	{
		QRect dst = rect;
		dst.setLeft(rect.left() + 40);
		dst.setTop(rect.top() + 20);
		painter->drawText(dst, Qt::AlignLeft | Qt::AlignVCenter, phone);
	}


}

// 决定该单元格的推荐大小
QSize  MyItemDrawer::sizeHint(const QStyleOptionViewItem & option,
	const QModelIndex & index) const
{
	//return QItemDelegate::sizeHint(option, index);

	QSize  size = QStyledItemDelegate::sizeHint(option, index);
	size.setHeight(40);
	return size;
}
