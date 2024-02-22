/********************************************************************************
** Form generated from reading UI file 'calldashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLDASHBOARD_H
#define UI_CALLDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CallDashBoard
{
public:

    void setupUi(QWidget *CallDashBoard)
    {
        if (CallDashBoard->objectName().isEmpty())
            CallDashBoard->setObjectName("CallDashBoard");
        CallDashBoard->resize(400, 300);

        retranslateUi(CallDashBoard);

        QMetaObject::connectSlotsByName(CallDashBoard);
    } // setupUi

    void retranslateUi(QWidget *CallDashBoard)
    {
        CallDashBoard->setWindowTitle(QCoreApplication::translate("CallDashBoard", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CallDashBoard: public Ui_CallDashBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLDASHBOARD_H
