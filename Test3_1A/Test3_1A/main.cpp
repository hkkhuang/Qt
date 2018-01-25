#include "Test3_1A.h"
#include <QtWidgets/QApplication>

#include "MyWin.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Test3_1A w;
// 	w.show();

	MyWin myWin(NULL);
	myWin.resize(400, 300); //设置大小
	myWin.move(100,100);  //指定位置
	myWin.show(); //显示窗口

	return a.exec();
}
