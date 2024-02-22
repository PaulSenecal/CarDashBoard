#include "appdashboard.h"
#include "ui_appdashboard.h"

AppDashBoard::AppDashBoard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AppDashBoard)
{
    ui->setupUi(this);
}

AppDashBoard::~AppDashBoard()
{
    delete ui;
}
