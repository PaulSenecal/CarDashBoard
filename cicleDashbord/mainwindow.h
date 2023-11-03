#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QPainter>
#include <QLabel>
#include <QPixmap>
#include <QTransform>
#include <QDateTime>

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

private slots:
    void on_closeQPushButton_clicked();

    void on_lessQpushButton_clicked();

    void on_addQpushButton_clicked();

private:
    Ui::MainWindow *ui;
    int speed;
};
#endif // MAINWINDOW_H
