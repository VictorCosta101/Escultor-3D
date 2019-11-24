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
if(p[10][5][5].isOn)
{
    cout<<"true"<<endl;
}
    for( int i = 0; i < 20; i++)
    {

        for(int j = 0; j < 10; j++)
        {

            if(p[i][j][5].isOn)
            {

                brush.setColor(QColor(0,255,0));
                    brush.setStyle(Qt::SolidPattern);
                    painter.setBrush(brush);

                    painter.drawRect(cx*tam1,cy*tam2,tam1,tam2);
            }
        }
    }
    cout<<"teste de repetição: "<<cx<<endl;

}

void Plotter::mousePressEvent(QMouseEvent *event)
{



if(event->button() ==Qt::LeftButton){
int x, y;

    x = event->x();
    y = event->y();

    mx=x;
    my=y;
    cx=(mx/tam1);
    cy=(my/tam2);

    emit mouseX(x);
    emit mouseY(y);




cout<<"PX = "<<(cx+1)<<" "<<" PY = "<<(cy+1)<<" "<<" fig* = "<<fig <<endl;
Plotter::Forma(fig);
cout<<"forma(fig) e chamada)"<<endl;

}

}

void Plotter::mouseMoveEvent(QMouseEvent *event)
{

    emit mouseX(event->x());
    emit mouseY(event->y());


}

void Plotter::Forma(int f)
{
    cout<<"testeforma"<<endl;
    cout<<"f = "<<f<<endl<<"fig = "<<fig<<endl;
    if ( f == 2)
    {
        cout<<"forma funciona"<<endl;
        s->putVoxel(cx,cy,5);

    }
    if(f == 3)
    {
        s->putSphere(cx,cy,5,7);
    }
    repaint();
}





