#include "Test9_2A.h"
#include "MyPage.h"
Test9_2A::Test9_2A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	MyPage* page = new MyPage();
	ui.stackedWidget->addWidget(page);

	//建立连接
	connect(ui.btnPage1, SIGNAL(clicked()), this, SLOT(OnBtnPage1()));
	connect(ui.btnPage2, SIGNAL(clicked()), this, SLOT(OnBtnPage2()));
	connect(ui.btnPage3, SIGNAL(clicked()), this, SLOT(OnBtnPage3()));
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

int Test9_2A::OnBtnPage3()
{
	ui.stackedWidget->setCurrentIndex(2);
	return 0;
}