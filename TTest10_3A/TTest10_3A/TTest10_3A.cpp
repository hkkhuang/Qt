#include "TTest10_3A.h"

TTest10_3A::TTest10_3A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btnSearch, SIGNAL(clicked()), this, SLOT(OnBtnSearch()));
}

int TTest10_3A::OnBtnSearch()
{
	//省略 只演示 可停靠窗口
	return 0;
}