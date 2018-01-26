#include "Test3_3B.h"
#include <QtWidgets/QApplication>

#include "Mywin.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Mywin w;  //构造函数 参数有默认值 一个空指针

	w.show();
	return a.exec();
}
