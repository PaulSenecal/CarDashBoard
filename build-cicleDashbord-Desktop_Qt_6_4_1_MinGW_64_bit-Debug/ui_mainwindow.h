/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *closeQPushButton;
    QPushButton *lessQpushButton;
    QPushButton *addQpushButton;
    QProgressBar *vitesseQprogressBar;
    QLineEdit *compteurQlineEdit;
    QLabel *NeedleQlabel;
    QLabel *QlabelBackGround;
    QLabel *hourCounterQLabel;
    QLabel *wethearReportQlabel;
    QLabel *degresQlabel;
    QLabel *windImageQlabel;
    QLabel *windCounterQlabel;
    QLabel *batteryLabel;
    QLabel *batteryStatusLabel;
    QLabel *labebatteryCapacityQlabel1;
    QLabel *labebatteryCapacityQlabel3;
    QLabel *labebatteryCapacityQlabel4;
    QLabel *labebatteryCapacityQlabel2;
    QLabel *speedMeterQlabel;
    QPushButton *homeQpushButton;
    QPushButton *menuQpushButton;
    QPushButton *musicQpushButton;
    QPushButton *phoneQpushButton;
    QPushButton *settingQpushButton;
    QLabel *displayDateQlabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1600, 1166);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        closeQPushButton = new QPushButton(centralwidget);
        closeQPushButton->setObjectName("closeQPushButton");
        closeQPushButton->setGeometry(QRect(0, 70, 83, 29));
        lessQpushButton = new QPushButton(centralwidget);
        lessQpushButton->setObjectName("lessQpushButton");
        lessQpushButton->setGeometry(QRect(240, 0, 83, 29));
        addQpushButton = new QPushButton(centralwidget);
        addQpushButton->setObjectName("addQpushButton");
        addQpushButton->setGeometry(QRect(380, 0, 83, 29));
        vitesseQprogressBar = new QProgressBar(centralwidget);
        vitesseQprogressBar->setObjectName("vitesseQprogressBar");
        vitesseQprogressBar->setGeometry(QRect(300, 40, 118, 23));
        vitesseQprogressBar->setValue(24);
        compteurQlineEdit = new QLineEdit(centralwidget);
        compteurQlineEdit->setObjectName("compteurQlineEdit");
        compteurQlineEdit->setGeometry(QRect(1140, 520, 151, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Zero Hour")});
        font.setPointSize(40);
        compteurQlineEdit->setFont(font);
        compteurQlineEdit->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;\n"
"color: white;"));
        compteurQlineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        compteurQlineEdit->setReadOnly(true);
        NeedleQlabel = new QLabel(centralwidget);
        NeedleQlabel->setObjectName("NeedleQlabel");
        NeedleQlabel->setGeometry(QRect(130, 10, 63, 20));
        QlabelBackGround = new QLabel(centralwidget);
        QlabelBackGround->setObjectName("QlabelBackGround");
        QlabelBackGround->setGeometry(QRect(-10, 0, 1611, 1151));
        QlabelBackGround->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/background.png")));
        hourCounterQLabel = new QLabel(centralwidget);
        hourCounterQLabel->setObjectName("hourCounterQLabel");
        hourCounterQLabel->setGeometry(QRect(210, 300, 131, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Zero Hour")});
        font1.setPointSize(18);
        font1.setBold(false);
        hourCounterQLabel->setFont(font1);
        hourCounterQLabel->setStyleSheet(QString::fromUtf8("color : #B8FF01"));
        wethearReportQlabel = new QLabel(centralwidget);
        wethearReportQlabel->setObjectName("wethearReportQlabel");
        wethearReportQlabel->setGeometry(QRect(1290, 300, 141, 41));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(false);
        wethearReportQlabel->setFont(font2);
        wethearReportQlabel->setStyleSheet(QString::fromUtf8("color : #B8FF01"));
        degresQlabel = new QLabel(centralwidget);
        degresQlabel->setObjectName("degresQlabel");
        degresQlabel->setGeometry(QRect(1230, 300, 81, 41));
        degresQlabel->setFont(font2);
        degresQlabel->setStyleSheet(QString::fromUtf8("color : #B8FF01"));
        windImageQlabel = new QLabel(centralwidget);
        windImageQlabel->setObjectName("windImageQlabel");
        windImageQlabel->setGeometry(QRect(1230, 330, 41, 41));
        windImageQlabel->setFont(font2);
        windImageQlabel->setStyleSheet(QString::fromUtf8("color : #B8FF01"));
        windImageQlabel->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/wind.png")));
        windCounterQlabel = new QLabel(centralwidget);
        windCounterQlabel->setObjectName("windCounterQlabel");
        windCounterQlabel->setGeometry(QRect(1260, 330, 111, 41));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(false);
        windCounterQlabel->setFont(font3);
        windCounterQlabel->setStyleSheet(QString::fromUtf8("color : white"));
        batteryLabel = new QLabel(centralwidget);
        batteryLabel->setObjectName("batteryLabel");
        batteryLabel->setGeometry(QRect(140, 678, 141, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Zero Hour")});
        font4.setPointSize(15);
        batteryLabel->setFont(font4);
        batteryLabel->setStyleSheet(QString::fromUtf8("color : white"));
        batteryStatusLabel = new QLabel(centralwidget);
        batteryStatusLabel->setObjectName("batteryStatusLabel");
        batteryStatusLabel->setGeometry(QRect(490, 678, 71, 41));
        batteryStatusLabel->setFont(font4);
        batteryStatusLabel->setStyleSheet(QString::fromUtf8("color : white"));
        labebatteryCapacityQlabel1 = new QLabel(centralwidget);
        labebatteryCapacityQlabel1->setObjectName("labebatteryCapacityQlabel1");
        labebatteryCapacityQlabel1->setGeometry(QRect(290, 690, 49, 16));
        labebatteryCapacityQlabel1->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/fullBattery.png")));
        labebatteryCapacityQlabel3 = new QLabel(centralwidget);
        labebatteryCapacityQlabel3->setObjectName("labebatteryCapacityQlabel3");
        labebatteryCapacityQlabel3->setGeometry(QRect(390, 690, 49, 16));
        labebatteryCapacityQlabel3->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/fullBattery.png")));
        labebatteryCapacityQlabel4 = new QLabel(centralwidget);
        labebatteryCapacityQlabel4->setObjectName("labebatteryCapacityQlabel4");
        labebatteryCapacityQlabel4->setGeometry(QRect(440, 690, 49, 16));
        labebatteryCapacityQlabel4->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/EmptyBattery.png")));
        labebatteryCapacityQlabel2 = new QLabel(centralwidget);
        labebatteryCapacityQlabel2->setObjectName("labebatteryCapacityQlabel2");
        labebatteryCapacityQlabel2->setGeometry(QRect(340, 690, 49, 16));
        labebatteryCapacityQlabel2->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/fullBattery.png")));
        speedMeterQlabel = new QLabel(centralwidget);
        speedMeterQlabel->setObjectName("speedMeterQlabel");
        speedMeterQlabel->setGeometry(QRect(1040, 410, 371, 201));
        speedMeterQlabel->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/SpeedometerBackground2.png")));
        homeQpushButton = new QPushButton(centralwidget);
        homeQpushButton->setObjectName("homeQpushButton");
        homeQpushButton->setGeometry(QRect(590, 320, 51, 51));
        homeQpushButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/DashBordSpeed/rsc/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        homeQpushButton->setIcon(icon);
        homeQpushButton->setIconSize(QSize(61, 51));
        menuQpushButton = new QPushButton(centralwidget);
        menuQpushButton->setObjectName("menuQpushButton");
        menuQpushButton->setGeometry(QRect(690, 330, 31, 31));
        menuQpushButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/DashBordSpeed/rsc/cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuQpushButton->setIcon(icon1);
        menuQpushButton->setIconSize(QSize(21, 31));
        musicQpushButton = new QPushButton(centralwidget);
        musicQpushButton->setObjectName("musicQpushButton");
        musicQpushButton->setGeometry(QRect(780, 330, 31, 31));
        musicQpushButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/DashBordSpeed/rsc/music.png"), QSize(), QIcon::Normal, QIcon::Off);
        musicQpushButton->setIcon(icon2);
        musicQpushButton->setIconSize(QSize(31, 31));
        phoneQpushButton = new QPushButton(centralwidget);
        phoneQpushButton->setObjectName("phoneQpushButton");
        phoneQpushButton->setGeometry(QRect(870, 320, 41, 41));
        phoneQpushButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/DashBordSpeed/rsc/phone.png"), QSize(), QIcon::Normal, QIcon::Off);
        phoneQpushButton->setIcon(icon3);
        phoneQpushButton->setIconSize(QSize(31, 41));
        settingQpushButton = new QPushButton(centralwidget);
        settingQpushButton->setObjectName("settingQpushButton");
        settingQpushButton->setGeometry(QRect(950, 320, 41, 41));
        settingQpushButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/DashBordSpeed/rsc/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingQpushButton->setIcon(icon4);
        settingQpushButton->setIconSize(QSize(41, 41));
        displayDateQlabel = new QLabel(centralwidget);
        displayDateQlabel->setObjectName("displayDateQlabel");
        displayDateQlabel->setGeometry(QRect(210, 350, 171, 16));
        QFont font5;
        font5.setPointSize(15);
        displayDateQlabel->setFont(font5);
        displayDateQlabel->setStyleSheet(QString::fromUtf8("color : white;"));
        MainWindow->setCentralWidget(centralwidget);
        QlabelBackGround->raise();
        addQpushButton->raise();
        compteurQlineEdit->raise();
        vitesseQprogressBar->raise();
        closeQPushButton->raise();
        NeedleQlabel->raise();
        lessQpushButton->raise();
        hourCounterQLabel->raise();
        wethearReportQlabel->raise();
        degresQlabel->raise();
        windImageQlabel->raise();
        windCounterQlabel->raise();
        batteryLabel->raise();
        batteryStatusLabel->raise();
        labebatteryCapacityQlabel1->raise();
        labebatteryCapacityQlabel3->raise();
        labebatteryCapacityQlabel4->raise();
        labebatteryCapacityQlabel2->raise();
        speedMeterQlabel->raise();
        homeQpushButton->raise();
        menuQpushButton->raise();
        musicQpushButton->raise();
        phoneQpushButton->raise();
        settingQpushButton->raise();
        displayDateQlabel->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1600, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        closeQPushButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        lessQpushButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        addQpushButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        compteurQlineEdit->setText(QCoreApplication::translate("MainWindow", "120", nullptr));
        NeedleQlabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        QlabelBackGround->setText(QString());
        hourCounterQLabel->setText(QCoreApplication::translate("MainWindow", "12:20", nullptr));
        wethearReportQlabel->setText(QCoreApplication::translate("MainWindow", "| CLOUDY", nullptr));
        degresQlabel->setText(QCoreApplication::translate("MainWindow", "20 C", nullptr));
        windImageQlabel->setText(QString());
        windCounterQlabel->setText(QCoreApplication::translate("MainWindow", "15-20 MPH ", nullptr));
        batteryLabel->setText(QCoreApplication::translate("MainWindow", "BATTERY", nullptr));
        batteryStatusLabel->setText(QCoreApplication::translate("MainWindow", "60 %", nullptr));
        labebatteryCapacityQlabel1->setText(QString());
        labebatteryCapacityQlabel3->setText(QString());
        labebatteryCapacityQlabel4->setText(QString());
        labebatteryCapacityQlabel2->setText(QString());
        speedMeterQlabel->setText(QString());
        homeQpushButton->setText(QString());
        menuQpushButton->setText(QString());
        musicQpushButton->setText(QString());
        phoneQpushButton->setText(QString());
        settingQpushButton->setText(QString());
        displayDateQlabel->setText(QCoreApplication::translate("MainWindow", "12 MARCH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
