#include "calculator_gui.h"

int main(int argc, char* argv[])
{
	//����ֻ��һ��Ӧ�ó�����Ķ���
	QApplication app(argc, argv);
	calculator_gui calculator;
	calculator.show();
	return app.exec();
}