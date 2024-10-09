#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

// changer pour ui
    this->setSpeed(10);
    ui->setupUi(this);
    ui->vitesseQprogressBar->setRange(0,220);
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

    displayCurrentDate();
    ui->pageStackedWidget->setCurrentIndex(1);

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
void MainWindow::displayCurrentDate()
{
    QDateTime localHour = QDateTime::currentDateTime();
    ui->hourCounterQLabel->setText(localHour.toString("hh:mm"));
    QDate _CurrentDate = QDate::currentDate();
    ui->displayDateQlabel->setText(QLocale::system().toString(_CurrentDate,"MMMM"));
}

void MainWindow::on_menuQpushButton_clicked()
{

}


void MainWindow::on_musicQpushButton_clicked()
{
    MusicPage = new MusicDashBoard;
    MusicPage->show();
    this->close();
    MusicPage->setWindowTitle("Music Page");
    this->~MainWindow();
}


void MainWindow::on_phoneQpushButton_clicked()
{

}


void MainWindow::on_settingQpushButton_clicked()
{

}

