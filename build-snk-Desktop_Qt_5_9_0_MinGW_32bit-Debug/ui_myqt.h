/********************************************************************************
** Form generated from reading UI file 'myqt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYQT_H
#define UI_MYQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyQt
{
public:

    void setupUi(QWidget *MyQt)
    {
        if (MyQt->objectName().isEmpty())
            MyQt->setObjectName(QStringLiteral("MyQt"));
        MyQt->resize(400, 300);

        retranslateUi(MyQt);

        QMetaObject::connectSlotsByName(MyQt);
    } // setupUi

    void retranslateUi(QWidget *MyQt)
    {
        MyQt->setWindowTitle(QApplication::translate("MyQt", "MyQt", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyQt: public Ui_MyQt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYQT_H
