/********************************************************************************
** Form generated from reading UI file 'settingdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDASHBOARD_H
#define UI_SETTINGDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingDashBoard
{
public:

    void setupUi(QWidget *SettingDashBoard)
    {
        if (SettingDashBoard->objectName().isEmpty())
            SettingDashBoard->setObjectName("SettingDashBoard");
        SettingDashBoard->resize(400, 300);

        retranslateUi(SettingDashBoard);

        QMetaObject::connectSlotsByName(SettingDashBoard);
    } // setupUi

    void retranslateUi(QWidget *SettingDashBoard)
    {
        SettingDashBoard->setWindowTitle(QCoreApplication::translate("SettingDashBoard", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingDashBoard: public Ui_SettingDashBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDASHBOARD_H
