#include "TTest11_1A.h"
#include <QtWidgets/QApplication>
#include "CircleWidget.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TTest11_1A w;
	w.show();

	//因为是widget 实例化 显示并设置相关参数
	//CircleWidget circle(NULL);
	//circle.resize(400, 300);
	//circle.move(300,300);
	//circle.show();

	return a.exec();
}
