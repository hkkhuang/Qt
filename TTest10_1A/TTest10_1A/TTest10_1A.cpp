#include "TTest10_1A.h"

TTest10_1A::TTest10_1A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//向工具栏加入其他的Widget
	m_lineEdit = new QLineEdit();
	m_lineEdit->setMaximumWidth(200);
	ui.mainToolBar->insertWidget(ui.actionSetting, m_lineEdit);

	connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(OnMenuNew()));
	connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(OnMenuSave()));
	connect(ui.actionHelp, SIGNAL(triggered()), this, SLOT(actionHelp()));
	connect(ui.actionSetting, SIGNAL(triggered()), this, SLOT(OnMenuSetting()));
}


int TTest10_1A::OnMenuNew()
{

	return 0;
}
int TTest10_1A::OnMenuSave()
{
	QString text = m_lineEdit->text();
	ui.lblMsg->setText(text);
	return 0;
}

int TTest10_1A::OnMenuHelp()
{

	return 0;
}
int TTest10_1A::OnMenuSetting()
{
	return 0;
}
