#include "Test8_1B.h"

//引入头文件  使用Sleep()
#include <winsock2.h>
#include <windows.h>


Test8_1B::Test8_1B(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//建立连接
	connect(ui.btnTest, SIGNAL(clicked()), this, SLOT(OnBtnTestClicked()));
}
int Test8_1B::OnBtnTestClicked()
{
	//全局函数
	::Sleep(1000);  //模拟 阻塞1s
	ui.plainTextEdit->setPlainText("Finish");
	return 0;
}