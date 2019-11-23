#include "plotter.h"
#include <QMouseEvent>
#include <QPainter>
#include <QBrush>
#include <Qpen>


Plotter::Plotter(QWidget *parent) : QWidget(parent)
{
    s = new Sculptor(20,10,10);

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    int dx = 0, dy =0;

    cx = 0;
    cy = 0;

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

  /* brush.setColor(QColor(0,255,0));
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);
    painter.drawRect(10*tam1, 5*tam2,tam1,tam2);
*/

   p.clear();

   p=s->readM();

    for( int i = 0; i < p.size(); i++)
    {

        for(int j = 0; j < p[0].size(); j++)
        {

            if(p[i][j].isOn)
            {

               cout<<"ok"<<endl;
                brush.setColor(QColor(0,255,0));
                    brush.setStyle(Qt::SolidPattern);
                    painter.setBrush(brush);

                    painter.drawRect(cx*tam1, cy*tam2,tam1,tam2);
            }
        }
    }

}

void Plotter::mousePressEvent(QMouseEvent *event)
{

    Sculptor *b;

if(event->button() ==Qt::LeftButton){
int x, y;
    x = event->x();
    y = event->y();

    mx=x;
    my=y;
    cx=(mx/tam1)+1;
    cy=(my/tam2)+1;

    emit mouseX(x);
    emit mouseY(y);


    cout<<"ok"<<endl;
cout<<mx<<" "<<my<<endl;
cout<<"PX = "<<cx<<" "<<" PY = "<<cy<<endl;

}
}

void Plotter::mouseMoveEvent(QMouseEvent *event)
{

    emit mouseX(event->x());
    emit mouseY(event->y());


}

void Plotter::Forma(int f)
{
    if ( f == 2)
    {
        s->putVoxel(cx,cy,5);
    }
}

void Plotter::pVoxel()
{
    forma = 2;
    cout<<"pVoxel"<<endl;
}


