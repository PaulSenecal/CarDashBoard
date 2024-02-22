#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
// changer pour ui
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
    QDateTime localHour = QDateTime::currentDateTime();

    QTime currentHour = QTime::currentTime();
    int hour = currentHour.hour();
    QString isPm = (hour > 12) ? "PM" : "AM";
    // a changerQdate cest un Qtme et peux renvoier am/pm ,  a suppr si +de 12
    ui->hourCounterQLabel->setText(localHour.toString("hh:mm") +" "+ isPm);

    QDate _CurrentDate = QDate::currentDate();
    QString month = "";
    switch (_CurrentDate.month()) {
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
    // a changer pour qlocal;;system(àtostring(date,"MMMM")
    QString dayString = QString::number(_CurrentDate.day());
    ui->displayDateQlabel->setText(dayString + " " + month);
    //a changer pour qdate().tostring()
}








void MainWindow::on_menuQpushButton_clicked()
{
    AppPages = new AppDashBoard;
    AppPages->show();
    this->close();
    AppPages->setWindowTitle("App Page");
    this->~MainWindow();
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
    CallPage = new CallDashBoard;
    CallPage->show();
    this->close();
    CallPage->setWindowTitle("Call Page");
    this->~MainWindow();
}


void MainWindow::on_settingQpushButton_clicked()
{
    SettingPage = new SettingDashBoard;
    SettingPage->show();
    this->close();
    SettingPage->setWindowTitle("setting Page");
    this->~MainWindow();
}

