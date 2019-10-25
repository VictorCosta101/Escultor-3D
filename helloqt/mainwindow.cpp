#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSliderInf,SIGNAL(valueChanged(int)), ui->lcdNumberInf,SLOT(display(int)));
    connect(ui->pushButtonFechar, SIGNAL(clicked()),this,SLOT(finaliza()));
    connect(ui->pushButtonText,&QPushButton::clicked,this,&MainWindow::copiaTexto);
    connect(ui->actionQuit,&QAction::triggered,this,&MainWindow::finaliza);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::finaliza()
{
    close();
}

void MainWindow::copiaTexto()
{
    QString s;
    s = ui->plainTextEdit->toPlainText();
    s = "<b>"+s+"</b>";
    ui->textEdit->setText(s);
}
