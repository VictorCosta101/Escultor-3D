#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "plotter.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // mudar cores

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

    // mudar cor (width 2)

    connect(ui->horizontalSliderR,
            &QAbstractSlider::valueChanged,
            ui->widgetCor,
            &PlotterCor::returnR);

    connect(ui->horizontalSliderG,
            &QAbstractSlider::valueChanged,
            ui->widgetCor,
            &PlotterCor::returnG);

    connect(ui->horizontalSliderB,
            &QAbstractSlider::valueChanged,
            ui->widgetCor,
            &PlotterCor::returnB);

    // mudar dimensoes

    connect(ui->horizontalSliderDim,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaDim);

    connect(ui->Dimx,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaDimX);

    connect(ui->DimY,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaDimY
            );

    connect(ui->dimZ,&QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaDimZ);

    //Dimensoes da esfera

    connect(ui->EsferaR,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaRaioSphere);

    //Dimensões do box

    connect(ui->horizontalSliderBoxX,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaBoxX);

    connect(ui->horizontalSliderBoxY,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaBoxY);

    connect(ui->horizontalSliderBoxZ,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaBoxZ);

    //Dimensões do ellipsoid

    connect(ui->horizontalSliderElliX,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaElliRx);

    connect(ui->horizontalSliderElliY,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaElliRy);

    connect(ui->horizontalSliderElliZ,
            &QAbstractSlider::valueChanged,
            ui->widget,
            &Plotter::modificaElliRz);


    //mudar as dim do plano

    connect(ui->pushButtonNova,
            &QPushButton::clicked,
            ui->widget,
            &Plotter::criarNovaMatriz);

    connect(ui->pushButtonDelete,
            &QPushButton::clicked,
            ui->widget,
           &Plotter::deletarMatriz );


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

void MainWindow::salvar()
{

}




