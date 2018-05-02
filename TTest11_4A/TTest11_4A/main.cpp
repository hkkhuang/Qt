#include "TTest11_4A.h"
#include <QtWidgets/QApplication>
#include "MyWidget.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//TTest11_4A w;
	//w.show();
	MyWidget m(NULL);
	m.show();
	return a.exec();
}
