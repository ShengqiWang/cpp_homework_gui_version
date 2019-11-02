#pragma once

#include <QLabel>
#include <QApplication>
#include <QLineEdit>
#include <QWidget>
#include <iostream>
#include <QMainWindow>
#include <QPushButton>
#include "calculator_shell.h"
#include <QtCore/QCoreApplication>
#include <QtCore/QList>
#include <qtextcodec.h> 
#include <QShortcut>
class calculator_gui : public QWidget, public calculator_shell
{
	//Q_OBJECT
	Q_OBJECT
public:
	QTextCodec* codec = QTextCodec::codecForName("GBK");//�޸������� 
	calculator_gui(QWidget* parent = 0);
	QLineEdit* input;
	QLineEdit* output;
	QFont font;
	QPushButton* confirm;
	void get_input(string);
	string calculate();
	QShortcut* key;//����һ����ݼ�"Key_Return"��
private:
	void set_lineedit();
	void set_button();
private slots:
	void get_exp();
};

