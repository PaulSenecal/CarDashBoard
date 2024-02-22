#include "settingdashboard.h"
#include "ui_settingdashboard.h"

SettingDashBoard::SettingDashBoard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SettingDashBoard)
{
    ui->setupUi(this);
}

SettingDashBoard::~SettingDashBoard()
{
    delete ui;
}
