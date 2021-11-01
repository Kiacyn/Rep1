/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPlan;
    QAction *actionNotatka;
    QAction *actionLista;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QCalendarWidget *calendarWidget;
    QListView *listPlans;
    QListView *listList;
    QListWidget *listWidgetNotes;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionPlan = new QAction(MainWindow);
        actionPlan->setObjectName(QString::fromUtf8("actionPlan"));
        actionNotatka = new QAction(MainWindow);
        actionNotatka->setObjectName(QString::fromUtf8("actionNotatka"));
        actionLista = new QAction(MainWindow);
        actionLista->setObjectName(QString::fromUtf8("actionLista"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        gridLayout->addWidget(calendarWidget, 0, 1, 1, 1);

        listPlans = new QListView(centralwidget);
        listPlans->setObjectName(QString::fromUtf8("listPlans"));

        gridLayout->addWidget(listPlans, 1, 1, 1, 1);

        listList = new QListView(centralwidget);
        listList->setObjectName(QString::fromUtf8("listList"));

        gridLayout->addWidget(listList, 1, 0, 1, 1);

        listWidgetNotes = new QListWidget(centralwidget);
        listWidgetNotes->setObjectName(QString::fromUtf8("listWidgetNotes"));

        gridLayout->addWidget(listWidgetNotes, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionPlan);
        menuMenu->addAction(actionNotatka);
        menuMenu->addAction(actionLista);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionPlan->setText(QCoreApplication::translate("MainWindow", "Plan", nullptr));
        actionNotatka->setText(QCoreApplication::translate("MainWindow", "Notatka", nullptr));
        actionLista->setText(QCoreApplication::translate("MainWindow", "Lista", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Nowy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
