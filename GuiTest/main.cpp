#include "GuiTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GuiTest w;
	w.show();
	return a.exec();
}
