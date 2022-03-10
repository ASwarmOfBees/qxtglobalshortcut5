#include "test.h"

#include <QMessageBox>

#include "../gui/qxtglobalshortcut.h"

test::test(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QxtGlobalShortcut * shortcut = new QxtGlobalShortcut(this);

	if (shortcut->setShortcut(QKeySequence("Alt+1")))
	{
		connect(shortcut, &QxtGlobalShortcut::activated, [this]() {
			activateWindow();
			QMessageBox::information(this, "GlobalShortCur", "Activated");
		});
	}
}

test::~test()
{

}

void test::on_pushButton_clicked()
{
	QMessageBox::information(this, "Button", "OK");
}
