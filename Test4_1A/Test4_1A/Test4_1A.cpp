#include "Test4_1A.h"


Test4_1A::Test4_1A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//将信号和槽连接
	connect(
		ui.btnShow, //对象a  必须是一个QObject* 类型
		SIGNAL(clicked(bool)),  // a的信号
		this, //对象b
		SLOT(OnShowClicked(bool)) //b的槽
	);
			
}
int Test4_1A::OnShowClicked(bool checked)
{
	ui.plainTextEdit->setPlainText("Hello World");
	return 0;
}