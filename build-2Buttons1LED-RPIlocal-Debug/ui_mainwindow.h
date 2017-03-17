/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *ON;
    QPushButton *OFF;
    QLabel *label;
    QLabel *label_2;
    QPushButton *ON_Red;
    QPushButton *OFF_RED;
    QPushButton *quit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 286);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ON = new QPushButton(centralWidget);
        ON->setObjectName(QStringLiteral("ON"));
        ON->setGeometry(QRect(30, 130, 101, 31));
        OFF = new QPushButton(centralWidget);
        OFF->setObjectName(QStringLiteral("OFF"));
        OFF->setGeometry(QRect(30, 170, 101, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 71, 91));
        label->setFrameShape(QFrame::NoFrame);
        label->setTextFormat(Qt::AutoText);
        label->setPixmap(QPixmap(QString::fromUtf8("../Pictures/LED-greenjpg.jpg")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 20, 101, 91));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setPixmap(QPixmap(QString::fromUtf8("../Pictures/LED_redjpg.jpg")));
        label_2->setAlignment(Qt::AlignCenter);
        ON_Red = new QPushButton(centralWidget);
        ON_Red->setObjectName(QStringLiteral("ON_Red"));
        ON_Red->setGeometry(QRect(250, 130, 101, 31));
        OFF_RED = new QPushButton(centralWidget);
        OFF_RED->setObjectName(QStringLiteral("OFF_RED"));
        OFF_RED->setGeometry(QRect(250, 170, 101, 31));
        quit = new QPushButton(centralWidget);
        quit->setObjectName(QStringLiteral("quit"));
        quit->setGeometry(QRect(140, 170, 101, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(quit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        ON->setText(QApplication::translate("MainWindow", "ON", 0));
        OFF->setText(QApplication::translate("MainWindow", "OFF", 0));
        label->setText(QString());
        label_2->setText(QString());
        ON_Red->setText(QApplication::translate("MainWindow", "ON", 0));
        OFF_RED->setText(QApplication::translate("MainWindow", "OFF", 0));
        quit->setText(QApplication::translate("MainWindow", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
