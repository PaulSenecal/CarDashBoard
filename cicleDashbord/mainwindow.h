#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QPainter>
#include <QLabel>
#include <QPixmap>
#include <QTransform>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void paintEvent(QPaintEvent* e);
    int getSpeed();
    void setSpeed(int);
    QPushButton * compteur;

    QLabel *unBackground;
    QPixmap *unPixBackground ;

private slots:
    void on_closeQPushButton_clicked();

    void on_lessQpushButton_clicked();

    void on_addQpushButton_clicked();

private:
    Ui::MainWindow *ui;
    int speed;
};
#endif // MAINWINDOW_H
