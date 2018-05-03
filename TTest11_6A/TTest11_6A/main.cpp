#include "TTest11_6A.h"
#include <QtWidgets/QApplication>
#include "MyWidget.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//TTest11_6A w;
	//w.show();

	MyWidget m(NULL);
	m.show();
	return a.exec();
}
