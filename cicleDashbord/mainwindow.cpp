#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->setSpeed(0);
    ui->setupUi(this);
  //  QPushButton *button = new QPushButton("&Download", this);
    QPushButton *compteur = new QPushButton(QString::number(speed), this);
    ui->vitesseQprogressBar->setRange(0,22);
    ui->vitesseQprogressBar->setValue(0);

    /*unBackground= new QLabel(this);
    unPixBackground = new QPixmap("C:/aiguillie.png");
    unBackground->setPixmap(*unPixBackground);r
    unBackground->setGeometry(100,100,100,100);*/

    QImage test;
    test.load(":/DashBordSpeed/rsc/auguilleTourner.png");

    //QTransform transform;
    //transform.rotate(0); // Changer cet angle selon vos besoins

    //QImage testRotated = test.transformed(transform); // Appliquer la transformation

    //ui->label->setPixmap(QPixmap::fromImage(testRotated));
    ui->label->setPixmap(QPixmap::fromImage(test));
    ui->label->setGeometry(200, 200, 2000, 2000);



/*
    QPixmap test3(":/DashBordSpeed/auguilleTourner.png");
    ui->label->setPixmap(test3);
    */


}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent* e)
{
        QWidget::paintEvent(e); // effectue le comportement standard

        QRectF rectangle(10.0, 200.0, 200.0, 200.0);
        int startAngle = 0 * 16;
        int spanAngle = 180 * 16;
        QPainter painter(this);

        painter.setPen( QPen(Qt::red, 2) ); // personnaliser
        painter.drawPie(rectangle, startAngle, spanAngle);


        // x y
        QRectF rectangle2(350.0, 200.0, 200.0, 200.0);
        int startAngle2 = 0 * 16;
        int spanAngle2 = 180 * 16;
        QPainter painter2(this);

        painter.setPen( QPen(Qt::blue, 2) ); // personnaliser
        painter.drawPie(rectangle2, startAngle2, spanAngle2);






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

