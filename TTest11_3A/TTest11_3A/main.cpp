#include "TTest11_3A.h"
#include <QtWidgets/QApplication>
#include "MyWidget.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//TTest11_3A w;
	//w.show();

	MyWidget myWidget(NULL);
	myWidget.show();
	return a.exec();
}
