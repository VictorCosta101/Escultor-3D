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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionSalvar;
    QAction *actionBox;
    QAction *actionEsfera;
    QAction *actionElispe;
    QAction *actionVoxel;
    QWidget *centralWidget;
    Plotter *widget;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_17;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QSlider *horizontalSlider_6;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_4;
    QSlider *horizontalSlider_4;
    QLCDNumber *lcdNumber_6;
    QSlider *horizontalSlider_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QSlider *horizontalSlider_7;
    QLCDNumber *lcdNumber_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_11;
    QGridLayout *gridLayout_4;
    QLabel *label_10;
    QSlider *horizontalSlider_8;
    QLCDNumber *lcdNumber_8;
    QLabel *label_12;
    QSlider *horizontalSlider_9;
    QLCDNumber *lcdNumber_9;
    QLabel *label_13;
    QSlider *horizontalSlider_10;
    QLCDNumber *lcdNumber_10;
    QWidget *widget_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_5;
    QLabel *label_14;
    QSlider *horizontalSlider_11;
    QLCDNumber *lcdNumber_11;
    QLabel *label_15;
    QSlider *horizontalSlider_12;
    QLCDNumber *lcdNumber_12;
    QLabel *label_16;
    QSlider *horizontalSlider_13;
    QLCDNumber *lcdNumber_13;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber_3;
    QSlider *horizontalSlider;
    QLCDNumber *lcdNumber_2;
    QLabel *label;
    QSlider *horizontalSlider_2;
    QLabel *label_3;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QSlider *horizontalSlider_3;
    QLCDNumber *lcdNumberX;
    QLCDNumber *lcdNumberY;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(788, 492);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionBox = new QAction(MainWindow);
        actionBox->setObjectName(QString::fromUtf8("actionBox"));
        actionEsfera = new QAction(MainWindow);
        actionEsfera->setObjectName(QString::fromUtf8("actionEsfera"));
        actionElispe = new QAction(MainWindow);
        actionElispe->setObjectName(QString::fromUtf8("actionElispe"));
        actionVoxel = new QAction(MainWindow);
        actionVoxel->setObjectName(QString::fromUtf8("actionVoxel"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new Plotter(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 481, 211));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 260, 521, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(510, 0, 20, 441));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(531, 311, 251, 16));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(550, 0, 179, 268));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        horizontalSlider_6 = new QSlider(layoutWidget);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_6, 2, 1, 1, 1);

        lcdNumber_5 = new QLCDNumber(layoutWidget);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));

        gridLayout_2->addWidget(lcdNumber_5, 1, 2, 1, 1);

        lcdNumber_4 = new QLCDNumber(layoutWidget);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));

        gridLayout_2->addWidget(lcdNumber_4, 0, 2, 1, 1);

        horizontalSlider_4 = new QSlider(layoutWidget);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_4, 0, 1, 1, 1);

        lcdNumber_6 = new QLCDNumber(layoutWidget);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));

        gridLayout_2->addWidget(lcdNumber_6, 2, 2, 1, 1);

        horizontalSlider_5 = new QSlider(layoutWidget);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_5, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        horizontalSlider_7 = new QSlider(layoutWidget);
        horizontalSlider_7->setObjectName(QString::fromUtf8("horizontalSlider_7"));
        horizontalSlider_7->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_7, 0, 1, 1, 1);

        lcdNumber_7 = new QLCDNumber(layoutWidget);
        lcdNumber_7->setObjectName(QString::fromUtf8("lcdNumber_7"));

        gridLayout_3->addWidget(lcdNumber_7, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_3->addWidget(label_11);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);

        horizontalSlider_8 = new QSlider(layoutWidget);
        horizontalSlider_8->setObjectName(QString::fromUtf8("horizontalSlider_8"));
        horizontalSlider_8->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_8, 0, 1, 1, 1);

        lcdNumber_8 = new QLCDNumber(layoutWidget);
        lcdNumber_8->setObjectName(QString::fromUtf8("lcdNumber_8"));

        gridLayout_4->addWidget(lcdNumber_8, 0, 2, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 1, 0, 1, 1);

        horizontalSlider_9 = new QSlider(layoutWidget);
        horizontalSlider_9->setObjectName(QString::fromUtf8("horizontalSlider_9"));
        horizontalSlider_9->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_9, 1, 1, 1, 1);

        lcdNumber_9 = new QLCDNumber(layoutWidget);
        lcdNumber_9->setObjectName(QString::fromUtf8("lcdNumber_9"));

        gridLayout_4->addWidget(lcdNumber_9, 1, 2, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 2, 0, 1, 1);

        horizontalSlider_10 = new QSlider(layoutWidget);
        horizontalSlider_10->setObjectName(QString::fromUtf8("horizontalSlider_10"));
        horizontalSlider_10->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_10, 2, 1, 1, 1);

        lcdNumber_10 = new QLCDNumber(layoutWidget);
        lcdNumber_10->setObjectName(QString::fromUtf8("lcdNumber_10"));

        gridLayout_4->addWidget(lcdNumber_10, 2, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(710, 330, 71, 81));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(532, 331, 172, 83));
        gridLayout_5 = new QGridLayout(layoutWidget1);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_5->addWidget(label_14, 0, 0, 1, 1);

        horizontalSlider_11 = new QSlider(layoutWidget1);
        horizontalSlider_11->setObjectName(QString::fromUtf8("horizontalSlider_11"));
        horizontalSlider_11->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider_11, 0, 1, 1, 1);

        lcdNumber_11 = new QLCDNumber(layoutWidget1);
        lcdNumber_11->setObjectName(QString::fromUtf8("lcdNumber_11"));

        gridLayout_5->addWidget(lcdNumber_11, 0, 2, 1, 1);

        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_5->addWidget(label_15, 1, 0, 1, 1);

        horizontalSlider_12 = new QSlider(layoutWidget1);
        horizontalSlider_12->setObjectName(QString::fromUtf8("horizontalSlider_12"));
        horizontalSlider_12->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider_12, 1, 1, 1, 1);

        lcdNumber_12 = new QLCDNumber(layoutWidget1);
        lcdNumber_12->setObjectName(QString::fromUtf8("lcdNumber_12"));

        gridLayout_5->addWidget(lcdNumber_12, 1, 2, 1, 1);

        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_5->addWidget(label_16, 2, 0, 1, 1);

        horizontalSlider_13 = new QSlider(layoutWidget1);
        horizontalSlider_13->setObjectName(QString::fromUtf8("horizontalSlider_13"));
        horizontalSlider_13->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider_13, 2, 1, 1, 1);

        lcdNumber_13 = new QLCDNumber(layoutWidget1);
        lcdNumber_13->setObjectName(QString::fromUtf8("lcdNumber_13"));

        gridLayout_5->addWidget(lcdNumber_13, 2, 2, 1, 1);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(130, 300, 221, 111));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber_3 = new QLCDNumber(layoutWidget2);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        gridLayout->addWidget(lcdNumber_3, 2, 2, 1, 1);

        horizontalSlider = new QSlider(layoutWidget2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 0, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(layoutWidget2);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout->addWidget(lcdNumber_2, 1, 2, 1, 1);

        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSlider_2 = new QSlider(layoutWidget2);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_2, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lcdNumber = new QLCDNumber(layoutWidget2);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 0, 2, 1, 1);

        horizontalSlider_3 = new QSlider(layoutWidget2);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_3, 2, 1, 1, 1);

        lcdNumberX = new QLCDNumber(centralWidget);
        lcdNumberX->setObjectName(QString::fromUtf8("lcdNumberX"));
        lcdNumberX->setGeometry(QRect(20, 290, 64, 23));
        lcdNumberY = new QLCDNumber(centralWidget);
        lcdNumberY->setObjectName(QString::fromUtf8("lcdNumberY"));
        lcdNumberY->setGeometry(QRect(20, 320, 64, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 788, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actionAbrir);
        mainToolBar->addAction(actionSalvar);
        mainToolBar->addAction(actionBox);
        mainToolBar->addAction(actionEsfera);
        mainToolBar->addAction(actionElispe);
        mainToolBar->addAction(actionVoxel);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), lcdNumber_4, SLOT(display(int)));
        QObject::connect(horizontalSlider_8, SIGNAL(valueChanged(int)), lcdNumber_8, SLOT(display(int)));
        QObject::connect(horizontalSlider_5, SIGNAL(valueChanged(int)), lcdNumber_5, SLOT(display(int)));
        QObject::connect(horizontalSlider_10, SIGNAL(valueChanged(int)), lcdNumber_10, SLOT(display(int)));
        QObject::connect(horizontalSlider_9, SIGNAL(valueChanged(int)), lcdNumber_9, SLOT(display(int)));
        QObject::connect(horizontalSlider_6, SIGNAL(valueChanged(int)), lcdNumber_6, SLOT(display(int)));
        QObject::connect(horizontalSlider_7, SIGNAL(valueChanged(int)), lcdNumber_7, SLOT(display(int)));
        QObject::connect(horizontalSlider_11, SIGNAL(valueChanged(int)), lcdNumber_11, SLOT(display(int)));
        QObject::connect(horizontalSlider_12, SIGNAL(valueChanged(int)), lcdNumber_12, SLOT(display(int)));
        QObject::connect(horizontalSlider_13, SIGNAL(valueChanged(int)), lcdNumber_13, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        actionBox->setText(QCoreApplication::translate("MainWindow", "Box", nullptr));
        actionEsfera->setText(QCoreApplication::translate("MainWindow", "Esfera", nullptr));
        actionElispe->setText(QCoreApplication::translate("MainWindow", "Elispe", nullptr));
        actionVoxel->setText(QCoreApplication::translate("MainWindow", "Voxel", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "                                      Cor", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "                        BOX", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", " Y", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", " X", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", " Z", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "                       Esfera", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", " R", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "                      Ellipsoide", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", " RX", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", " RY", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", " RZ", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", " R", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", " G", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", " B", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " X", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", " Z", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", " Y", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
