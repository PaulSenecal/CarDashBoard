#include "calldashboard.h"
#include "ui_calldashboard.h"

CallDashBoard::CallDashBoard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CallDashBoard)
{
    ui->setupUi(this);
}

CallDashBoard::~CallDashBoard()
{
    delete ui;
}
