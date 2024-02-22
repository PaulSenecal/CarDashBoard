/********************************************************************************
** Form generated from reading UI file 'musicdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICDASHBOARD_H
#define UI_MUSICDASHBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicDashBoard
{
public:
    QLabel *backgroundLabel;
    QGroupBox *groupBox;
    QPushButton *homeButton;
    QPushButton *appButton;
    QPushButton *musicButton;
    QPushButton *callBuuton;
    QPushButton *settingButton;

    void setupUi(QWidget *MusicDashBoard)
    {
        if (MusicDashBoard->objectName().isEmpty())
            MusicDashBoard->setObjectName("MusicDashBoard");
        MusicDashBoard->resize(1600, 1166);
        backgroundLabel = new QLabel(MusicDashBoard);
        backgroundLabel->setObjectName("backgroundLabel");
        backgroundLabel->setGeometry(QRect(0, 21, 1920, 1080));
        backgroundLabel->setPixmap(QPixmap(QString::fromUtf8(":/DashBordSpeed/rsc/background.png")));
        groupBox = new QGroupBox(MusicDashBoard);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(600, 300, 431, 71));
        groupBox->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        homeButton = new QPushButton(groupBox);
        homeButton->setObjectName("homeButton");
        homeButton->setGeometry(QRect(20, 30, 30, 30));
        homeButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Menu/rsc/Menu/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        homeButton->setIcon(icon);
        homeButton->setIconSize(QSize(31, 31));
        appButton = new QPushButton(groupBox);
        appButton->setObjectName("appButton");
        appButton->setGeometry(QRect(110, 30, 30, 30));
        appButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Menu/rsc/Menu/Squarre.png"), QSize(), QIcon::Normal, QIcon::Off);
        appButton->setIcon(icon1);
        appButton->setIconSize(QSize(21, 31));
        musicButton = new QPushButton(groupBox);
        musicButton->setObjectName("musicButton");
        musicButton->setGeometry(QRect(190, 20, 51, 51));
        musicButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Menu/rsc/Menu/yellowMusic.png"), QSize(), QIcon::Normal, QIcon::Off);
        musicButton->setIcon(icon2);
        musicButton->setIconSize(QSize(61, 51));
        callBuuton = new QPushButton(groupBox);
        callBuuton->setObjectName("callBuuton");
        callBuuton->setGeometry(QRect(270, 30, 41, 41));
        callBuuton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Menu/rsc/Menu/phone.png"), QSize(), QIcon::Normal, QIcon::Off);
        callBuuton->setIcon(icon3);
        callBuuton->setIconSize(QSize(31, 41));
        settingButton = new QPushButton(groupBox);
        settingButton->setObjectName("settingButton");
        settingButton->setGeometry(QRect(340, 30, 41, 41));
        settingButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"border: transparent;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Menu/rsc/Menu/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingButton->setIcon(icon4);
        settingButton->setIconSize(QSize(41, 41));

        retranslateUi(MusicDashBoard);

        QMetaObject::connectSlotsByName(MusicDashBoard);
    } // setupUi

    void retranslateUi(QWidget *MusicDashBoard)
    {
        MusicDashBoard->setWindowTitle(QCoreApplication::translate("MusicDashBoard", "Form", nullptr));
        backgroundLabel->setText(QString());
        groupBox->setTitle(QString());
        homeButton->setText(QString());
        appButton->setText(QString());
        musicButton->setText(QString());
        callBuuton->setText(QString());
        settingButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MusicDashBoard: public Ui_MusicDashBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICDASHBOARD_H
