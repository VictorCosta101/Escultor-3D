#include "mainwindow2.h"
#include "ui_mainwindow2.h"

mainwindow2::mainwindow2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwindow2)
{
    ui->setupUi(this);
}

mainwindow2::~mainwindow2()
{
    delete ui;
}
