#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    this->setSpeed(10);
    ui->setupUi(this);
    //  QPushButton *button = new QPushButton("&Download", this);
    ui->vitesseQprogressBar->setRange(0,22);
    ui->vitesseQprogressBar->setValue(0);

    speedMeter= new QLabel(this);
    speedMeterBackground = new QPixmap(":/DashBordSpeed/rsc/speedMeterBackground.png");
    speedMeter->setPixmap(*speedMeterBackground);
    speedMeter->setGeometry(250,420,370,173);

    QImage beforeRotateNeedle;
    beforeRotateNeedle.load(":/DashBordSpeed/rsc/rotateNeedle.png");
    QTransform rotateNeedle;
    rotateNeedle.rotate(80);
    QImage afterRotateNeedle = beforeRotateNeedle.transformed(rotateNeedle);
    ui->NeedleQlabel->setPixmap(QPixmap::fromImage(afterRotateNeedle));
    ui->NeedleQlabel->setGeometry(65,275,50,50);


    QDateTime heureLocale = QDateTime::currentDateTime();
    ui->hourCompteurQLabel->setText(heureLocale.toString("hh:mm"));//verife pm/am non integre
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_closeQPushButton_clicked()
{
    this->close();
}


void MainWindow::on_lessQpushButton_clicked()
{
    this->speed--;
    ui->vitesseQprogressBar->setValue(speed);
    ui->compteurQlineEdit->setText(QString::number(speed));

}


void MainWindow::on_addQpushButton_clicked()
{
    this->speed++;
    ui->vitesseQprogressBar->setValue(speed);
    ui->compteurQlineEdit->setText(QString::number(speed));
}

void MainWindow::setSpeed(int enterSpeed)
{
    this->speed=enterSpeed;
}

