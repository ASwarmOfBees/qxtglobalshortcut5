#ifndef TEST_H
#define TEST_H

#include <QtWidgets/QMainWindow>
#include "ui_test.h"

class test : public QMainWindow
{
	Q_OBJECT

public:
	test(QWidget *parent = 0);
	~test();

private slots:
	void on_pushButton_clicked();

private:
	Ui::testClass ui;
};

#endif // TEST_H
