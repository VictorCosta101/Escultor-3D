#include "plottercor.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include "plotter.h"
PlotterCor::PlotterCor(QWidget *parent) : QWidget(parent)
{

}

void PlotterCor::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen;
    QBrush brush;
    Plotter p;

    brush.setColor(QColor(p.pr,p.pg,p.pb));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setStyle(Qt::SolidLine);

    painter.setBrush(brush);
    painter.setPen(pen);

    //definicoes das dimensões dos Voxels




     painter.drawRect(0,0,width(),height());

}
