#include "Test8_4ColseEvent.h"
#include <QMessageBox>
#include "GBK.h"
#include <QCloseEvent>

Test8_4ColseEvent::Test8_4ColseEvent(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void Test8_4ColseEvent::closeEvent(QCloseEvent* event)
{
	QMessageBox::StandardButton button;
	button = QMessageBox::question(this, GBK::ToUnicode("退出"), GBK::ToUnicode("确定退出吗？"), QMessageBox::Yes | QMessageBox::No);

	if (button == QMessageBox::Yes)
	{
		event->accept(); // 接受退出信号，程序退出 
	} 
	else if(button == QMessageBox::No)
	{
		event->ignore(); //忽略退出信号  程序继续运行
	}
}