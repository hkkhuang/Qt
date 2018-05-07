#include "TTest11_10AScreenCapture.h"
#include <QtWidgets/QApplication>
#include "MyCd.h"

int main(int argc, char *argv[])
{
	//设置当前目录为exe所在目录
	MyCd::cd();

	QApplication a(argc, argv);
	TTest11_10AScreenCapture w;
	w.show();
	return a.exec();
}
