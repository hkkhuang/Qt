#include "TTest11_2A.h"
#include <QtWidgets/QApplication>
#include "MyWidget.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//TTest11_2A w;
	//w.show();

	MyWidget myWidget(NULL);
	myWidget.resize(400, 300);
	myWidget.move(100, 200);
	myWidget.show();

	return a.exec();
}
