#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <plotter.h>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->widget,SIGNAL(mouseX(int)),ui->lcdNumberX,SLOT(display(int)));
    connect(ui->widget,SIGNAL(mouseY(int)),ui->lcdNumberY,SLOT(display(int)));

    connect(ui->actionVoxel,SIGNAL(triggered()),this,SLOT(pVoxel()));
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pVoxel()
{
    Plotter p;
    p.informForma(2);
    cout<<"funciona aqui forma"<<endl;

}


