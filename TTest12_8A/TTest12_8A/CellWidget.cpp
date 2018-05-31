#include "CellWidget.h"

CellWidget::CellWidget(QTreeWidgetItem* rowid, QWidget *parent)
	: QWidget(parent),rowid(rowid)
{
	ui.setupUi(this);
	connect(ui.btnDelete, SIGNAL(clicked()), this, SLOT(onBtnDelete()));
}

CellWidget::~CellWidget()
{
}

int CellWidget::onBtnDelete()
{
	//按钮响应 发射信号 
	emit userDelete(rowid);
	return 0;
}
