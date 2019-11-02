#pragma once

#include "calculator_shell.h"
#include <QLabel>
#include <QLineEdit>
#include <QWidget>
#include <QPushButton>
#include <QTextCodec> 
#include <QShortcut>
#include <QString>
class calculator_gui : public QWidget, public calculator_shell
{
	Q_OBJECT
public:
	QTextCodec* codec = QTextCodec::codecForName("GBK");//�޸������� 
	calculator_gui(QWidget* parent = 0);
	QLineEdit* input;
	QLineEdit* output;
	QFont font;
	QPushButton* confirm;
	QShortcut* key;//����һ����ݼ�"Key_Return"��
private:
	void get_input(string);
	void set_lineedit();
	void set_button();
	string calculate();
private slots:
	void get_outcome();
};

