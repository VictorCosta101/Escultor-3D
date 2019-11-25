#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "plotter.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->horizontalSliderR,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::returnR);
    connect(ui->horizontalSliderG,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::returnG);
    connect(ui->horizontalSliderB,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::returnB);

    connect(ui->horizontalSliderDim,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaDim);
    connect(ui->EsferaR,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaRaioSphere);
    connect(ui->dimX,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaDimX);
    connect(ui->dimY,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaDimY);
    connect(ui->dimZ,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaDimZ);
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pVoxel()
{
    ui->widget->fig=1;
}

void MainWindow::cVoxel()
{
    ui->widget->fig=2;
}

void MainWindow::pSphere()
{
    ui->widget->fig=3;
}

void MainWindow::cSphere()
{
    ui->widget->fig=4;
}

void MainWindow::pBox()
{
    ui->widget->fig=5;
}

void MainWindow::cBox()
{
    ui->widget->fig=6;
}

void MainWindow::pEllipsoid()
{
    ui->widget->fig=7;
}

void MainWindow::cEllipsoid()
{
    ui->widget->fig=8;
}




