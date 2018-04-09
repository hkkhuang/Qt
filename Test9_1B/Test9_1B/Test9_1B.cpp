#include "Test9_1B.h"
#include <QPlainTextEdit>
Test9_1B::Test9_1B(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//建立连接
	connect(ui.btnNew, SIGNAL(clicked()), this, SLOT(OnBtnNew()));
	connect(ui.btnDelete, SIGNAL(clicked()), this, SLOT(OnBtnDelete()));
}

//新建添加标签页
int Test9_1B::OnBtnNew()
{
	QPlainTextEdit* page = new QPlainTextEdit();
	ui.tabWidget->addTab(page,"new1");
	return 0;
}

//删除当前标签页
int Test9_1B::OnBtnDelete()
{
	int index = ui.tabWidget->currentIndex();
	ui.tabWidget->removeTab(index);
	return 0;
}