#include "Test3_2A.h"
#include <QtWidgets/QApplication>
#include "MyWin.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MyWin w(NULL);
	w.resize(400, 300); //设置大小
	w.move(100, 100); //指定位置
	w.show();//显示窗口
	return a.exec();
}
