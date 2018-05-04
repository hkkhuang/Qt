#include "TTest11_7A.h"

TTest11_7A::TTest11_7A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//关联自定义控件发出来的信号
	connect(ui.myWidget, SIGNAL(selected(QRect)),
		this, SLOT(OnSelected(QRect)));
}

int TTest11_7A::OnSelected(QRect area)
{
	return 0;
}