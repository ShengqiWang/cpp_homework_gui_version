#include "calculator_gui.h"
#include <QApplication>

int main(int argc, char* argv[])
{
	QApplication *app=new QApplication(argc, argv);
	calculator_gui *�������Ӽ�����=new calculator_gui;
    �������Ӽ�����->����ǳ�();
	return app->exec();
}