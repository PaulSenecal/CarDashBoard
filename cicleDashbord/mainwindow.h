#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QPainter>
#include <QLabel>
#include <QPixmap>
#include <QTransform>
#include <QDateTime>

#include <QDebug>

#include "music/musicdashboard.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int getSpeed();
    void setSpeed(int);
    QPushButton * compteur;

    QLabel *speedMeter;
    QPixmap *speedMeterBackground ;

    //test
    QImage *beforeRotateNeedle;
    QTransform *rotateNeedle;
    QImage *afterRotateNeedle;
    QDate *dateCourante;
    void displayCurrentDate();

private slots:
    void on_closeQPushButton_clicked();//test

    void on_lessQpushButton_clicked();//test

    void on_addQpushButton_clicked();//test

    void on_menuQpushButton_clicked();

    void on_musicQpushButton_clicked();

    void on_phoneQpushButton_clicked();

    void on_settingQpushButton_clicked();

private:
    Ui::MainWindow *ui;
    int speed;
    MusicDashBoard * MusicPage;


};
#endif // MAINWINDOW_H
