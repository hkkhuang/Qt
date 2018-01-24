#include "Test2_3A.h"
#include "MyWin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//Test2_3A w;
	//w.show();
	MyWin w(NULL); //顶级窗口 在创建时传入NULL 
	w.resize(400, 300); //设置大小
	w.move(100, 100);  //设置位置
	w.show(); // 显示窗口
	return a.exec();
}
