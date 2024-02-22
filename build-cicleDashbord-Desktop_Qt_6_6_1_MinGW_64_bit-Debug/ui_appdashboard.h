/********************************************************************************
** Form generated from reading UI file 'appdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPDASHBOARD_H
#define UI_APPDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppDashBoard
{
public:

    void setupUi(QWidget *AppDashBoard)
    {
        if (AppDashBoard->objectName().isEmpty())
            AppDashBoard->setObjectName("AppDashBoard");
        AppDashBoard->resize(400, 300);

        retranslateUi(AppDashBoard);

        QMetaObject::connectSlotsByName(AppDashBoard);
    } // setupUi

    void retranslateUi(QWidget *AppDashBoard)
    {
        AppDashBoard->setWindowTitle(QCoreApplication::translate("AppDashBoard", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppDashBoard: public Ui_AppDashBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPDASHBOARD_H
