#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen;
    QBrush brush;

    pen.setColor(QColor(225,0,0));
    brush.setColor(QColor(225,225,0));
    brush.setStyle(Qt::SolidPattern);
    painter.setPen(pen);
    painter.setBrush(brush);

    painter.drawRect(0,0,10,10);
}


