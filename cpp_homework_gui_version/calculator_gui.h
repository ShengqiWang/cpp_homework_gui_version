#pragma once

#include "calculator_shell.h"
#include <QLabel>
#include <QLineEdit>
#include <QWidget>
#include <QPushButton>
#include <QTextCodec> 
#include <QShortcut>
#include <QString>
#include <QIcon>
#include <vector>
#include <algorithm>

class calculator_gui : private QWidget, private calculator_shell
{
	Q_OBJECT

public:
	calculator_gui(QWidget* parent = 0);
	void ����ǳ�();

private:
	QLineEdit* input;
	QLineEdit* output;
	QFont font;
	QLabel* error_msg;
	vector<QString> input_str;

	vector<QString> btn_fun_name = {
		"sqrt", "cos", "sin", "tan",
		"arcsin", "arccos", "arctan", "sinh",
		"cosh", "tanh", "arcsinh", "arccosh",
		"arctanh", "lg", "ln", "abs"
	};
	vector<QString> btn_num_name = {
		"!","1","2","3","+","^",
		"%","4","5","6","-","(",
		"pi","7","8","9","*",")",
		"e","ans","0",".","/","="
	};

	void set_lineedit();
	void set_button();


private slots:
	void disp_outcome();
	void btn_input();
	void key_input();
	void clr_sc();
};

