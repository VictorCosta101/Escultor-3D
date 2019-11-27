/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "plotter.h"
#include "plottercor.h"

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
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSlider *horizontalSliderG;
    QSlider *horizontalSliderB;
    QSlider *horizontalSliderR;
    QSlider *horizontalSliderDim;
    QFrame *line;
    QFrame *line_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QSlider *EsferaR;
    QLCDNumber *lcdNumber;
    PlotterCor *widgetCor;
    QPushButton *pushButtonNova;
    QSlider *Dimx;
    QSlider *DimY;
    QSlider *dimZ;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(777, 543);
        actionVoxel = new QAction(MainWindow);
        actionVoxel->setObjectName(QStringLiteral("actionVoxel"));
        actionApagar = new QAction(MainWindow);
        actionApagar->setObjectName(QStringLiteral("actionApagar"));
        actionEsfera = new QAction(MainWindow);
        actionEsfera->setObjectName(QStringLiteral("actionEsfera"));
        actioncutEsfera = new QAction(MainWindow);
        actioncutEsfera->setObjectName(QStringLiteral("actioncutEsfera"));
        actionBox = new QAction(MainWindow);
        actionBox->setObjectName(QStringLiteral("actionBox"));
        actioncutBox = new QAction(MainWindow);
        actioncutBox->setObjectName(QStringLiteral("actioncutBox"));
        actionEllipsoid = new QAction(MainWindow);
        actionEllipsoid->setObjectName(QStringLiteral("actionEllipsoid"));
        actioncutEllipsoid = new QAction(MainWindow);
        actioncutEllipsoid->setObjectName(QStringLiteral("actioncutEllipsoid"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new Plotter(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 541, 321));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(550, 380, 105, 78));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSliderG = new QSlider(layoutWidget);
        horizontalSliderG->setObjectName(QStringLiteral("horizontalSliderG"));
        horizontalSliderG->setMaximum(255);
        horizontalSliderG->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderG, 1, 1, 1, 1);

        horizontalSliderB = new QSlider(layoutWidget);
        horizontalSliderB->setObjectName(QStringLiteral("horizontalSliderB"));
        horizontalSliderB->setMaximum(255);
        horizontalSliderB->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderB, 2, 1, 1, 1);

        horizontalSliderR = new QSlider(layoutWidget);
        horizontalSliderR->setObjectName(QStringLiteral("horizontalSliderR"));
        horizontalSliderR->setMaximum(255);
        horizontalSliderR->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderR, 0, 1, 1, 1);

        horizontalSliderDim = new QSlider(centralWidget);
        horizontalSliderDim->setObjectName(QStringLiteral("horizontalSliderDim"));
        horizontalSliderDim->setGeometry(QRect(10, 360, 551, 20));
        horizontalSliderDim->setMaximum(9);
        horizontalSliderDim->setSliderPosition(5);
        horizontalSliderDim->setOrientation(Qt::Horizontal);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 340, 561, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(550, -10, 20, 361));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(600, 230, 174, 46));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        EsferaR = new QSlider(layoutWidget1);
        EsferaR->setObjectName(QStringLiteral("EsferaR"));
        EsferaR->setMaximum(10);
        EsferaR->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(EsferaR, 0, 1, 1, 1);

        lcdNumber = new QLCDNumber(layoutWidget1);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        gridLayout_2->addWidget(lcdNumber, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        widgetCor = new PlotterCor(centralWidget);
        widgetCor->setObjectName(QStringLiteral("widgetCor"));
        widgetCor->setGeometry(QRect(650, 380, 120, 80));
        pushButtonNova = new QPushButton(centralWidget);
        pushButtonNova->setObjectName(QStringLiteral("pushButtonNova"));
        pushButtonNova->setGeometry(QRect(240, 420, 75, 23));
        Dimx = new QSlider(centralWidget);
        Dimx->setObjectName(QStringLiteral("Dimx"));
        Dimx->setGeometry(QRect(40, 400, 160, 19));
        Dimx->setMinimum(1);
        Dimx->setOrientation(Qt::Horizontal);
        DimY = new QSlider(centralWidget);
        DimY->setObjectName(QStringLiteral("DimY"));
        DimY->setGeometry(QRect(40, 430, 160, 19));
        DimY->setMinimum(1);
        DimY->setOrientation(Qt::Horizontal);
        dimZ = new QSlider(centralWidget);
        dimZ->setObjectName(QStringLiteral("dimZ"));
        dimZ->setGeometry(QRect(40, 460, 160, 19));
        dimZ->setMinimum(1);
        dimZ->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 777, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        QObject::connect(EsferaR, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionVoxel->setText(QApplication::translate("MainWindow", "Voxel", nullptr));
        actionApagar->setText(QApplication::translate("MainWindow", "Apagar", nullptr));
        actionEsfera->setText(QApplication::translate("MainWindow", "Esfera", nullptr));
        actioncutEsfera->setText(QApplication::translate("MainWindow", "cutEsfera", nullptr));
        actionBox->setText(QApplication::translate("MainWindow", "Box", nullptr));
        actioncutBox->setText(QApplication::translate("MainWindow", "cutBox", nullptr));
        actionEllipsoid->setText(QApplication::translate("MainWindow", "Ellipsoid", nullptr));
        actioncutEllipsoid->setText(QApplication::translate("MainWindow", "cutEllipsoid", nullptr));
        label->setText(QApplication::translate("MainWindow", "  R", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "  G", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "  B", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "                        Esfera", nullptr));
        label_4->setText(QApplication::translate("MainWindow", " R", nullptr));
        pushButtonNova->setText(QApplication::translate("MainWindow", "Nova", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
