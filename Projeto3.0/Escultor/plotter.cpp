#include "plotter.h"
#include <QMouseEvent>
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

    Sculptor *b;

    tam1 = width()/20;
    tam2 = height()/10;
    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setStyle(Qt::SolidLine);

    painter.setBrush(brush);
    painter.setPen(pen);
    //Cria a matrtiz
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

    brush.setColor(QColor(0,255,0));
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);
    painter.drawRect(10*tam1, 5*tam2,tam1,tam2);

    for(int i =0 ; i < 100 ; i++){
        for(int j = 0; j < 100; j++ )
        {

        }
}
}

void Plotter::mousePressEvent(QMouseEvent *event)
{
    int x, y;
    x = event->x();
    y = event->y();

    mx=x;
    my=y;
    emit mouseX(x);
    emit mouseY(y);
}

void Plotter::mouseMoveEvent(QMouseEvent *event)
{
    emit mouseX(event->x());
    emit mouseY(event->y());


}

void Plotter::voxel()
{
    Sculptor Sculptor(100,100,100);



    Sculptor.putVoxel(mx,my,10);
}
