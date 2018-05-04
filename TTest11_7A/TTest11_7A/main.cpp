#include "TTest11_7A.h"
#include <QtWidgets/QApplication>
#include "MyWidget.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TTest11_7A w;
	w.show();
	//MyWidget m(NULL);
	//m.resize(300, 400);
	//m.move(200, 200);
	//m.show();
	return a.exec();
}
