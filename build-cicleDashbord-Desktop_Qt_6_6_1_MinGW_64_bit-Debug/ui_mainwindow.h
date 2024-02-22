/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
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
    QLabel *speedMeterQlabel;
    QPushButton *homeQpushButton;
    QPushButton *menuQpushButton;
    QPushButton *musicQpushButton;
    QPushButton *phoneQpushButton;
    QPushButton *settingQpushButton;
    QLabel *displayDateQlabel;
    QGroupBox *EnergyComsuptionQgroupBox;
    QLabel *ComsuptionQlabel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label;
    QGroupBox *EnergyComsuptionStatusQgroupBox;
    QLabel *energyComsuptionQlabel;
    QLabel *energyComsuptionQlabel_23;
    QLabel *energyComsuptionQlabel_20;
    QLabel *energyComsuptionQlabel_6;
    QLabel *energyComsuptionQlabel_11;
    QLabel *energyComsuptionQlabel_14;
    QLabel *energyComsuptionQlabel_8;
    QLabel *energyComsuptionQlabel_18;
    QLabel *energyComsuptionQlabel_13;
    QLabel *energyComsuptionQlabel_21;
    QLabel *energyComsuptionQlabel_2;
    QLabel *energyComsuptionQlabel_9;
    QLabel *energyComsuptionQlabel_19;
    QLabel *energyComsuptionQlabel_7;
    QLabel *energyComsuptionQlabel_3;
    QLabel *energyComsuptionQlabel_22;
    QLabel *energyComsuptionQlabel_16;
    QLabel *energyComsuptionQlabel_5;
    QLabel *energyComsuptionQlabel_15;
    QLabel *energyComsuptionQlabel_4;
    QLabel *energyComsuptionQlabel_17;
    QLabel *energyComsuptionQlabel_12;
    QLabel *energyComsuptionQlabel_10;
    QGroupBox *groupBox;
    QLabel *batteryStatusLabel;
    QLabel *labebatteryCapacityQlabel4;
    QLabel *labebatteryCapacityQlabel3;
    QLabel *labebatteryCapacityQlabel2;
    QLabel *batteryLabel;
    QLabel *labebatteryCapacityQlabel1;
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
        compteurQlineEdit->setGeometry(QRect(1180, 520, 91, 81));
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
        hourCounterQLabel->setGeometry(QRect(210, 300, 161, 51));
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
        QFont font4;
        font4.setPointSize(15);
        displayDateQlabel->setFont(font4);
        displayDateQlabel->setStyleSheet(QString::fromUtf8("color : white;"));
        EnergyComsuptionQgroupBox = new QGroupBox(centralwidget);
        EnergyComsuptionQgroupBox->setObjectName("EnergyComsuptionQgroupBox");
        EnergyComsuptionQgroupBox->setGeometry(QRect(1070, 650, 311, 161));
        EnergyComsuptionQgroupBox->setStyleSheet(QString::fromUtf8("border :transparant;"));
        ComsuptionQlabel = new QLabel(EnergyComsuptionQgroupBox);
        ComsuptionQlabel->setObjectName("ComsuptionQlabel");
        ComsuptionQlabel->setGeometry(QRect(0, 0, 311, 171));
        ComsuptionQlabel->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/energyConsumption.png")));
        label_3 = new QLabel(EnergyComsuptionQgroupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 110, 61, 31));
        label_3->setStyleSheet(QString::fromUtf8("color :white"));
        label_4 = new QLabel(EnergyComsuptionQgroupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 110, 71, 31));
        label_4->setStyleSheet(QString::fromUtf8("color :white"));
        label_2 = new QLabel(EnergyComsuptionQgroupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 110, 61, 31));
        label_2->setStyleSheet(QString::fromUtf8("color :white"));
        label = new QLabel(EnergyComsuptionQgroupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 281, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Zero Hour")});
        font5.setPointSize(12);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("color : white"));
        EnergyComsuptionStatusQgroupBox = new QGroupBox(EnergyComsuptionQgroupBox);
        EnergyComsuptionStatusQgroupBox->setObjectName("EnergyComsuptionStatusQgroupBox");
        EnergyComsuptionStatusQgroupBox->setGeometry(QRect(20, 50, 241, 61));
        energyComsuptionQlabel = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel->setObjectName("energyComsuptionQlabel");
        energyComsuptionQlabel->setGeometry(QRect(8, 20, 5, 31));
        energyComsuptionQlabel->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        energyComsuptionQlabel_23 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_23->setObjectName("energyComsuptionQlabel_23");
        energyComsuptionQlabel_23->setGeometry(QRect(228, 20, 5, 31));
        energyComsuptionQlabel_23->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/emptyLine.png")));
        energyComsuptionQlabel_20 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_20->setObjectName("energyComsuptionQlabel_20");
        energyComsuptionQlabel_20->setGeometry(QRect(198, 20, 5, 31));
        energyComsuptionQlabel_20->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/emptyLine.png")));
        energyComsuptionQlabel_6 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_6->setObjectName("energyComsuptionQlabel_6");
        energyComsuptionQlabel_6->setGeometry(QRect(58, 20, 5, 31));
        energyComsuptionQlabel_6->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        energyComsuptionQlabel_11 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_11->setObjectName("energyComsuptionQlabel_11");
        energyComsuptionQlabel_11->setGeometry(QRect(108, 20, 5, 31));
        energyComsuptionQlabel_11->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        energyComsuptionQlabel_14 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_14->setObjectName("energyComsuptionQlabel_14");
        energyComsuptionQlabel_14->setGeometry(QRect(138, 20, 5, 31));
        energyComsuptionQlabel_14->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        energyComsuptionQlabel_8 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_8->setObjectName("energyComsuptionQlabel_8");
        energyComsuptionQlabel_8->setGeometry(QRect(78, 20, 5, 31));
        energyComsuptionQlabel_8->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        energyComsuptionQlabel_18 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_18->setObjectName("energyComsuptionQlabel_18");
        energyComsuptionQlabel_18->setGeometry(QRect(178, 20, 5, 31));
        energyComsuptionQlabel_18->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/emptyLine.png")));
        energyComsuptionQlabel_13 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_13->setObjectName("energyComsuptionQlabel_13");
        energyComsuptionQlabel_13->setGeometry(QRect(128, 20, 5, 31));
        energyComsuptionQlabel_13->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        energyComsuptionQlabel_21 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_21->setObjectName("energyComsuptionQlabel_21");
        energyComsuptionQlabel_21->setGeometry(QRect(208, 20, 5, 31));
        energyComsuptionQlabel_21->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/emptyLine.png")));
        energyComsuptionQlabel_2 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_2->setObjectName("energyComsuptionQlabel_2");
        energyComsuptionQlabel_2->setGeometry(QRect(18, 20, 5, 31));
        energyComsuptionQlabel_2->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        energyComsuptionQlabel_9 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_9->setObjectName("energyComsuptionQlabel_9");
        energyComsuptionQlabel_9->setGeometry(QRect(88, 20, 5, 31));
        energyComsuptionQlabel_9->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        energyComsuptionQlabel_19 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_19->setObjectName("energyComsuptionQlabel_19");
        energyComsuptionQlabel_19->setGeometry(QRect(188, 20, 5, 31));
        energyComsuptionQlabel_19->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/emptyLine.png")));
        energyComsuptionQlabel_7 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_7->setObjectName("energyComsuptionQlabel_7");
        energyComsuptionQlabel_7->setGeometry(QRect(68, 20, 5, 31));
        energyComsuptionQlabel_7->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        energyComsuptionQlabel_3 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_3->setObjectName("energyComsuptionQlabel_3");
        energyComsuptionQlabel_3->setGeometry(QRect(28, 20, 5, 31));
        energyComsuptionQlabel_3->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        energyComsuptionQlabel_22 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_22->setObjectName("energyComsuptionQlabel_22");
        energyComsuptionQlabel_22->setGeometry(QRect(218, 20, 5, 31));
        energyComsuptionQlabel_22->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/emptyLine.png")));
        energyComsuptionQlabel_16 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_16->setObjectName("energyComsuptionQlabel_16");
        energyComsuptionQlabel_16->setGeometry(QRect(158, 20, 5, 31));
        energyComsuptionQlabel_16->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/emptyLine.png")));
        energyComsuptionQlabel_5 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_5->setObjectName("energyComsuptionQlabel_5");
        energyComsuptionQlabel_5->setGeometry(QRect(48, 20, 5, 31));
        energyComsuptionQlabel_5->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        energyComsuptionQlabel_15 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_15->setObjectName("energyComsuptionQlabel_15");
        energyComsuptionQlabel_15->setGeometry(QRect(148, 20, 5, 31));
        energyComsuptionQlabel_15->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        energyComsuptionQlabel_4 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_4->setObjectName("energyComsuptionQlabel_4");
        energyComsuptionQlabel_4->setGeometry(QRect(38, 20, 5, 31));
        energyComsuptionQlabel_4->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        energyComsuptionQlabel_17 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_17->setObjectName("energyComsuptionQlabel_17");
        energyComsuptionQlabel_17->setGeometry(QRect(168, 20, 5, 31));
        energyComsuptionQlabel_17->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/emptyLine.png")));
        energyComsuptionQlabel_12 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_12->setObjectName("energyComsuptionQlabel_12");
        energyComsuptionQlabel_12->setGeometry(QRect(118, 20, 5, 31));
        energyComsuptionQlabel_12->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        energyComsuptionQlabel_10 = new QLabel(EnergyComsuptionStatusQgroupBox);
        energyComsuptionQlabel_10->setObjectName("energyComsuptionQlabel_10");
        energyComsuptionQlabel_10->setGeometry(QRect(98, 20, 5, 31));
        energyComsuptionQlabel_10->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/Line.png")));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(150, 650, 451, 41));
        groupBox->setStyleSheet(QString::fromUtf8("border :transparant"));
        batteryStatusLabel = new QLabel(groupBox);
        batteryStatusLabel->setObjectName("batteryStatusLabel");
        batteryStatusLabel->setGeometry(QRect(360, 10, 71, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Zero Hour")});
        font6.setPointSize(15);
        batteryStatusLabel->setFont(font6);
        batteryStatusLabel->setStyleSheet(QString::fromUtf8("color : white"));
        labebatteryCapacityQlabel4 = new QLabel(groupBox);
        labebatteryCapacityQlabel4->setObjectName("labebatteryCapacityQlabel4");
        labebatteryCapacityQlabel4->setGeometry(QRect(310, 22, 49, 16));
        labebatteryCapacityQlabel4->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/EmptyBattery.png")));
        labebatteryCapacityQlabel3 = new QLabel(groupBox);
        labebatteryCapacityQlabel3->setObjectName("labebatteryCapacityQlabel3");
        labebatteryCapacityQlabel3->setGeometry(QRect(260, 22, 49, 16));
        labebatteryCapacityQlabel3->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/fullBattery.png")));
        labebatteryCapacityQlabel2 = new QLabel(groupBox);
        labebatteryCapacityQlabel2->setObjectName("labebatteryCapacityQlabel2");
        labebatteryCapacityQlabel2->setGeometry(QRect(210, 22, 49, 16));
        labebatteryCapacityQlabel2->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/fullBattery.png")));
        batteryLabel = new QLabel(groupBox);
        batteryLabel->setObjectName("batteryLabel");
        batteryLabel->setGeometry(QRect(10, 10, 141, 41));
        batteryLabel->setFont(font6);
        batteryLabel->setStyleSheet(QString::fromUtf8("color : white"));
        labebatteryCapacityQlabel1 = new QLabel(groupBox);
        labebatteryCapacityQlabel1->setObjectName("labebatteryCapacityQlabel1");
        labebatteryCapacityQlabel1->setGeometry(QRect(160, 22, 49, 16));
        labebatteryCapacityQlabel1->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/fullBattery.png")));
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
        speedMeterQlabel->raise();
        homeQpushButton->raise();
        menuQpushButton->raise();
        musicQpushButton->raise();
        phoneQpushButton->raise();
        settingQpushButton->raise();
        displayDateQlabel->raise();
        EnergyComsuptionQgroupBox->raise();
        groupBox->raise();
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
        speedMeterQlabel->setText(QString());
        homeQpushButton->setText(QString());
        menuQpushButton->setText(QString());
        musicQpushButton->setText(QString());
        phoneQpushButton->setText(QString());
        settingQpushButton->setText(QString());
        displayDateQlabel->setText(QCoreApplication::translate("MainWindow", "12 MARCH", nullptr));
        EnergyComsuptionQgroupBox->setTitle(QString());
        ComsuptionQlabel->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "188 wh/km \n"
"Average", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "27.5 kwh\n"
"FullCapacity", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "150 km \n"
"Remaining", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ENERGY COMSUPTION", nullptr));
        EnergyComsuptionStatusQgroupBox->setTitle(QString());
        energyComsuptionQlabel->setText(QString());
        energyComsuptionQlabel_23->setText(QString());
        energyComsuptionQlabel_20->setText(QString());
        energyComsuptionQlabel_6->setText(QString());
        energyComsuptionQlabel_11->setText(QString());
        energyComsuptionQlabel_14->setText(QString());
        energyComsuptionQlabel_8->setText(QString());
        energyComsuptionQlabel_18->setText(QString());
        energyComsuptionQlabel_13->setText(QString());
        energyComsuptionQlabel_21->setText(QString());
        energyComsuptionQlabel_2->setText(QString());
        energyComsuptionQlabel_9->setText(QString());
        energyComsuptionQlabel_19->setText(QString());
        energyComsuptionQlabel_7->setText(QString());
        energyComsuptionQlabel_3->setText(QString());
        energyComsuptionQlabel_22->setText(QString());
        energyComsuptionQlabel_16->setText(QString());
        energyComsuptionQlabel_5->setText(QString());
        energyComsuptionQlabel_15->setText(QString());
        energyComsuptionQlabel_4->setText(QString());
        energyComsuptionQlabel_17->setText(QString());
        energyComsuptionQlabel_12->setText(QString());
        energyComsuptionQlabel_10->setText(QString());
        groupBox->setTitle(QString());
        batteryStatusLabel->setText(QCoreApplication::translate("MainWindow", "60 %", nullptr));
        labebatteryCapacityQlabel4->setText(QString());
        labebatteryCapacityQlabel3->setText(QString());
        labebatteryCapacityQlabel2->setText(QString());
        batteryLabel->setText(QCoreApplication::translate("MainWindow", "BATTERY", nullptr));
        labebatteryCapacityQlabel1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
