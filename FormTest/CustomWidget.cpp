#include "CustomWidget.h"
#include "ui_CustomWidget.h"

CustomWidget::CustomWidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::CustomWidget)
{
	ui->setupUi(this);
}

CustomWidget::~CustomWidget()
{
	delete ui;
}
