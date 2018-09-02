#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GuiTest.h"

class GuiTest : public QMainWindow
{
	Q_OBJECT

public:
	GuiTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::GuiTestClass ui;
};
