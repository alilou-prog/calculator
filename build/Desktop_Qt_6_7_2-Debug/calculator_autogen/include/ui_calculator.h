/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *b3;
    QPushButton *b2;
    QPushButton *b5;
    QPushButton *b1;
    QPushButton *bPlus;
    QPushButton *bEqual;
    QPushButton *b4;
    QPushButton *b7;
    QPushButton *bTimes;
    QPushButton *b6;
    QLineEdit *screen;
    QPushButton *b8;
    QPushButton *b9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(449, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        b3 = new QPushButton(centralwidget);
        b3->setObjectName("b3");

        gridLayout->addWidget(b3, 1, 2, 1, 1);

        b2 = new QPushButton(centralwidget);
        b2->setObjectName("b2");

        gridLayout->addWidget(b2, 1, 1, 1, 1);

        b5 = new QPushButton(centralwidget);
        b5->setObjectName("b5");

        gridLayout->addWidget(b5, 2, 1, 1, 1);

        b1 = new QPushButton(centralwidget);
        b1->setObjectName("b1");

        gridLayout->addWidget(b1, 1, 0, 1, 1);

        bPlus = new QPushButton(centralwidget);
        bPlus->setObjectName("bPlus");

        gridLayout->addWidget(bPlus, 2, 3, 1, 1);

        bEqual = new QPushButton(centralwidget);
        bEqual->setObjectName("bEqual");

        gridLayout->addWidget(bEqual, 3, 3, 1, 1);

        b4 = new QPushButton(centralwidget);
        b4->setObjectName("b4");

        gridLayout->addWidget(b4, 2, 0, 1, 1);

        b7 = new QPushButton(centralwidget);
        b7->setObjectName("b7");

        gridLayout->addWidget(b7, 3, 0, 1, 1);

        bTimes = new QPushButton(centralwidget);
        bTimes->setObjectName("bTimes");

        gridLayout->addWidget(bTimes, 1, 3, 1, 1);

        b6 = new QPushButton(centralwidget);
        b6->setObjectName("b6");

        gridLayout->addWidget(b6, 2, 2, 1, 1);

        screen = new QLineEdit(centralwidget);
        screen->setObjectName("screen");
        screen->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(screen->sizePolicy().hasHeightForWidth());
        screen->setSizePolicy(sizePolicy);
        screen->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        screen->setReadOnly(true);
        screen->setClearButtonEnabled(true);

        gridLayout->addWidget(screen, 0, 0, 1, 4);

        b8 = new QPushButton(centralwidget);
        b8->setObjectName("b8");

        gridLayout->addWidget(b8, 3, 1, 1, 1);

        b9 = new QPushButton(centralwidget);
        b9->setObjectName("b9");

        gridLayout->addWidget(b9, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 449, 22));
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
        b3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        b2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        b5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        b1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        bPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        bEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        b4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        b7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        bTimes->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        b6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        b8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        b9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
