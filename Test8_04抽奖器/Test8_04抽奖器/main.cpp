#include "Test8_04.h"
#include <QtWidgets/QApplication>
#include "AfCd.h"

int main(int argc, char *argv[])
{
	AfCd::cd();
	QApplication a(argc, argv);
	Test8_04 w;
	w.show();
	return a.exec();
}
