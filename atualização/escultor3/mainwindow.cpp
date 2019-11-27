#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "plotter.h"
#include "dialogdim.h"

MainWindow::MainWindow(QWidget *parent) :

    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    // valor maximo dos sliders
    ui->horizontalSliderDim->setMinimum(1);
    //ui->horizontalSliderDim->setMaximum(ui->widget->dimZ-1);
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

    //Salvar desenho

    connect(ui->actionSalvar,
            SIGNAL(triggered(bool)),
            ui->widget,
            SLOT(salvarDesenho()));




    // caixa de dialogo

    connect(ui->actionabrirNovaCanvas,
            SIGNAL(triggered(bool)),
            this,
            SLOT(novaDim()));

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

void MainWindow::novaDim()
{
    DialogDim g;

    int cx, cy, cz;

    bool g1, g2, g3;

    QString lx, ly, lz;
    if(g.exec()==QDialog::Accepted)
    {

        lx = g.readDimX();
        ly = g.readDimY();
        lz = g.readDimZ();

        cx = lx.toInt(&g1,10);
        cy = ly.toInt(&g2,10);
        cz = lz.toInt(&g3,10);

        ui->widget->modificaDimX(cx);
        ui->widget->modificaDimY(cy);
        ui->widget->modificaDimZ(cz);

        ui->widget->criarNovaMatriz();

    }


}



void MainWindow::abreDialogo()
{
    DialogDim d;
    d.exec();

}




