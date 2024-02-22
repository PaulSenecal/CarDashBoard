#include "musicdashboard.h"
#include "ui_musicdashboard.h"

MusicDashBoard::MusicDashBoard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MusicDashBoard)
{
    ui->setupUi(this);
}

MusicDashBoard::~MusicDashBoard()
{
    delete ui;
}

void MusicDashBoard::on_homeButton_clicked()
{

}

