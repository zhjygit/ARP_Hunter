#include "ARP_Hunter.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ARP_Hunter w;
	w.show();
	return a.exec();
}
