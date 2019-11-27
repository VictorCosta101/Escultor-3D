#include "plottercor.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include "plotter.h"
PlotterCor::PlotterCor(QWidget *parent) : QWidget(parent)
{
    r = 255; g = 255; b = 255;
}

void PlotterCor::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen;
    QBrush brush;
    Plotter p;


    brush.setColor(QColor(r,g,b));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setStyle(Qt::SolidLine);

    painter.setBrush(brush);
    painter.setPen(pen);

    //definicoes das dimensões dos Voxels




     painter.drawRect(0,0,width(),height());

}

void PlotterCor::returnR(int _r)
{

    r = _r;
    repaint();
}

void PlotterCor::returnG(int _g)
{
    g = _g;
    repaint();
}

void PlotterCor::returnB(int _b)
{
    b = _b;
    repaint();
}
