/********************************************************************************
** Form generated from reading UI file 'oprs.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPRS_H
#define UI_OPRS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oprs
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *_2;
    QPushButton *_1;
    QPushButton *_3;
    QPushButton *_4;
    QTextBrowser *vop;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *oprs)
    {
        if (oprs->objectName().isEmpty())
            oprs->setObjectName("oprs");
        oprs->resize(800, 600);
        centralwidget = new QWidget(oprs);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 30, 271, 161));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        _2 = new QPushButton(gridLayoutWidget);
        _2->setObjectName("_2");

        gridLayout->addWidget(_2, 2, 1, 1, 1);

        _1 = new QPushButton(gridLayoutWidget);
        _1->setObjectName("_1");

        gridLayout->addWidget(_1, 1, 1, 1, 1);

        _3 = new QPushButton(gridLayoutWidget);
        _3->setObjectName("_3");

        gridLayout->addWidget(_3, 1, 2, 1, 1);

        _4 = new QPushButton(gridLayoutWidget);
        _4->setObjectName("_4");

        gridLayout->addWidget(_4, 2, 2, 1, 1);

        vop = new QTextBrowser(gridLayoutWidget);
        vop->setObjectName("vop");

        gridLayout->addWidget(vop, 0, 1, 1, 2);

        oprs->setCentralWidget(centralwidget);
        menubar = new QMenuBar(oprs);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        oprs->setMenuBar(menubar);
        statusbar = new QStatusBar(oprs);
        statusbar->setObjectName("statusbar");
        oprs->setStatusBar(statusbar);

        retranslateUi(oprs);

        QMetaObject::connectSlotsByName(oprs);
    } // setupUi

    void retranslateUi(QMainWindow *oprs)
    {
        oprs->setWindowTitle(QCoreApplication::translate("oprs", "MainWindow", nullptr));
        _2->setText(QCoreApplication::translate("oprs", "PushButton", nullptr));
        _1->setText(QCoreApplication::translate("oprs", "PushButton", nullptr));
        _3->setText(QCoreApplication::translate("oprs", "PushButton", nullptr));
        _4->setText(QCoreApplication::translate("oprs", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oprs: public Ui_oprs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPRS_H
