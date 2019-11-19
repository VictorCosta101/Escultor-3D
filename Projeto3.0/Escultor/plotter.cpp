#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <Qpen>


Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;
    int tam1, tam2;
    int dx = 0, dy =0;

    tam1 = width()/20;
    tam2 = height()/10;
    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setStyle(Qt::SolidLine);

    painter.setBrush(brush);
    painter.setPen(pen);
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 10 ; j++)
        {
            painter.drawRect(dx,dy,tam1, tam2);
                dy = dy+tam2;
        }
        dx = dx+tam1;
        dy = 0;
    }
}
