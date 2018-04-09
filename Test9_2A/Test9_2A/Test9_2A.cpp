#include "Test9_2A.h"

Test9_2A::Test9_2A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//建立连接
	connect(ui.btnPage1, SIGNAL(clicked()), this, SLOT(OnBtnPage1()));
	connect(ui.btnPage2, SIGNAL(clicked()), this, SLOT(OnBtnPage2()));
}

int Test9_2A::OnBtnPage1()
{
	ui.stackedWidget->setCurrentIndex(0);
	return 0;
}
int Test9_2A::OnBtnPage2()
{
	ui.stackedWidget->setCurrentIndex(1);
	return 0;
}