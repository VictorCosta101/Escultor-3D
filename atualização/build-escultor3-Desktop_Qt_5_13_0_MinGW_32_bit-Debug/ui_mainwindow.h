/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionVoxel;
    QAction *actionApagar;
    QAction *actionEsfera;
    QAction *actioncutEsfera;
    QAction *actionBox;
    QAction *actioncutBox;
    QAction *actionEllipsoid;
    QAction *actioncutEllipsoid;
    QWidget *centralWidget;
    Plotter *widget;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSlider *horizontalSliderG;
    QSlider *horizontalSliderB;
    QSlider *horizontalSliderR;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 366);
        actionVoxel = new QAction(MainWindow);
        actionVoxel->setObjectName(QString::fromUtf8("actionVoxel"));
        actionApagar = new QAction(MainWindow);
        actionApagar->setObjectName(QString::fromUtf8("actionApagar"));
        actionEsfera = new QAction(MainWindow);
        actionEsfera->setObjectName(QString::fromUtf8("actionEsfera"));
        actioncutEsfera = new QAction(MainWindow);
        actioncutEsfera->setObjectName(QString::fromUtf8("actioncutEsfera"));
        actionBox = new QAction(MainWindow);
        actionBox->setObjectName(QString::fromUtf8("actionBox"));
        actioncutBox = new QAction(MainWindow);
        actioncutBox->setObjectName(QString::fromUtf8("actioncutBox"));
        actionEllipsoid = new QAction(MainWindow);
        actionEllipsoid->setObjectName(QString::fromUtf8("actionEllipsoid"));
        actioncutEllipsoid = new QAction(MainWindow);
        actioncutEllipsoid->setObjectName(QString::fromUtf8("actioncutEllipsoid"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new Plotter(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 30, 271, 181));
        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(370, 210, 105, 78));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSliderG = new QSlider(widget1);
        horizontalSliderG->setObjectName(QString::fromUtf8("horizontalSliderG"));
        horizontalSliderG->setMaximum(255);
        horizontalSliderG->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderG, 1, 1, 1, 1);

        horizontalSliderB = new QSlider(widget1);
        horizontalSliderB->setObjectName(QString::fromUtf8("horizontalSliderB"));
        horizontalSliderB->setMaximum(255);
        horizontalSliderB->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderB, 2, 1, 1, 1);

        horizontalSliderR = new QSlider(widget1);
        horizontalSliderR->setObjectName(QString::fromUtf8("horizontalSliderR"));
        horizontalSliderR->setMaximum(255);
        horizontalSliderR->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderR, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 480, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actionVoxel);
        mainToolBar->addAction(actionApagar);
        mainToolBar->addAction(actionEsfera);
        mainToolBar->addAction(actioncutEsfera);
        mainToolBar->addAction(actionBox);
        mainToolBar->addAction(actioncutBox);
        mainToolBar->addAction(actionEllipsoid);
        mainToolBar->addAction(actioncutEllipsoid);

        retranslateUi(MainWindow);
        QObject::connect(actionVoxel, SIGNAL(triggered()), MainWindow, SLOT(pVoxel()));
        QObject::connect(actionApagar, SIGNAL(triggered()), MainWindow, SLOT(cVoxel()));
        QObject::connect(actionEsfera, SIGNAL(triggered()), MainWindow, SLOT(pSphere()));
        QObject::connect(actioncutEsfera, SIGNAL(triggered()), MainWindow, SLOT(cSphere()));
        QObject::connect(actionBox, SIGNAL(triggered()), MainWindow, SLOT(pBox()));
        QObject::connect(actioncutBox, SIGNAL(triggered()), MainWindow, SLOT(cBox()));
        QObject::connect(actionEllipsoid, SIGNAL(triggered()), MainWindow, SLOT(pEllipsoid()));
        QObject::connect(actioncutEllipsoid, SIGNAL(triggered()), MainWindow, SLOT(cEllipsoid()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionVoxel->setText(QCoreApplication::translate("MainWindow", "Voxel", nullptr));
        actionApagar->setText(QCoreApplication::translate("MainWindow", "Apagar", nullptr));
        actionEsfera->setText(QCoreApplication::translate("MainWindow", "Esfera", nullptr));
        actioncutEsfera->setText(QCoreApplication::translate("MainWindow", "cutEsfera", nullptr));
        actionBox->setText(QCoreApplication::translate("MainWindow", "Box", nullptr));
        actioncutBox->setText(QCoreApplication::translate("MainWindow", "cutBox", nullptr));
        actionEllipsoid->setText(QCoreApplication::translate("MainWindow", "Ellipsoid", nullptr));
        actioncutEllipsoid->setText(QCoreApplication::translate("MainWindow", "cutEllipsoid", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "  R", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "  G", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "  B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
