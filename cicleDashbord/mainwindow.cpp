#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    this->setSpeed(10);
    ui->setupUi(this);
    //  QPushButton *button = new QPushButton("&Download", this);
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


    QDateTime heureLocale = QDateTime::currentDateTime();
    ui->hourCompteurQLabel->setText(heureLocale.toString("hh:mm"));//verife pm/am non integre

    /*QDate dateCourante = QDate::currentDate();

       // Afficher le mois courant
       qDebug() << "Le mois courant est : " << dateCourante.month();*/
    displayCurrentDate();
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
    QDate dateCourante = QDate::currentDate();
    QString month = "";
    switch (dateCourante.month()) {
    case 1: month = "JANUARY";
        break;
    case 2: month = "FEBRUARY";
        break;
    case 3: month = "MARCH";
        break;
    case 4: month = "APRIL";
        break;
    case 5: month = "MAY";
        break;
    case 6: month = "JUNE";
        break;
    case 7: month = "JULY";
        break;
    case 8: month = "AUGUST";
        break;
    case 9: month = "SEPTEMBER";
        break;
    case 10: month = "OCTOBER";
        break;
    case 11: month = "NOVEMBER";
        break;
    case 12: month = "DECEMBER";
        break;
    default: month = "";
        break;
    }
    QString dayString = QString::number(dateCourante.day());
    ui->displayDateQlabel->setText(dayString + " " + month);
}
