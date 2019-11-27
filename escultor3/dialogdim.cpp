#include "dialogdim.h"
#include "ui_dialogdim.h"

DialogDim::DialogDim(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDim)
{
    ui->setupUi(this);
}

DialogDim::~DialogDim()
{
    delete ui;
}

QString DialogDim::readDimX()
{

    return ui->lineEditX->text();

}

QString DialogDim::readDimY()
{

    return ui->lineEditY->text();

}

QString DialogDim::readDimZ()
{

    return ui->lineEditZ->text();

}
