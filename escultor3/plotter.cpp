#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <vector>


Plotter::Plotter(QWidget *parent) : QWidget(parent)
{
    v = new  Sculptor(21,11,11);
    pr=255;pg=255;pb=255;
}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen;
    QBrush brush;

    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setStyle(Qt::SolidLine);

    painter.setBrush(brush);
    painter.setPen(pen);

    //definicoes das dimensões dos Voxels

    tamX = width()/20;
    tamY = height()/10;

    for(int i = 0; i < 20; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            painter.drawRect(i*tamX,j*tamY,tamX,tamY);
        }
    }
    //copiar matriz do sculptor
    p.clear();
    p = v->copyM(5);

    // plotar os Voxels ativos

    for( int i = 0 ; i < 20; i++)
    {
        for(int j = 0 ; j < 10; j++)
        {
            if(p[i][j][5].isOn){
                cout<<"i = "<<i<<" // j = "<<j<<endl;

                pen.setColor(QColor(0,0,0));
                //pen.setWidth(2);
                brush.setColor(QColor(p[i][j][5].r,p[i][j][5].g,p[i][j][5].b));
                painter.setBrush(brush);
                painter.setPen(pen);


                painter.drawRect(i*tamX,j*tamY, tamX, tamY);
            }
        }
    }
}

void Plotter::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        mx=event->x();
        my=event->y();

        mx = mx/tamX;
        my = my/tamY;

        emit mouseX(mx);
        emit mouseY(my);

        cout<<"mx = "<<mx<<" || my = "<<my<<endl;

        criarObjeto(fig);
    }
}

void Plotter::criarObjeto(int ob)
{
    if(ob == 1)
    {
        v->setColor(pr,pg,pb,1.0);
        v->putVoxel(mx,my,5);
    }
    if(ob == 2)
    {
        v->setColor(pr,pg,pb,1.0);
        v->cutVoxel(mx,my,5);
    }
    if(ob == 3)
    {
        v->setColor(pr,pg,pb,1.0);
        v->putSphere(mx,my,5,6);
    }
    if( ob == 4)
    {
        v->setColor(pr,pg,pb,1.0);
        v->cutSphere(mx,my,5,6);

    }
    if( ob == 5)
    {
        v->setColor(pr,pg,pb,1.0);
        v->putBox(mx,mx+5,my,my+5,5,10);
    }
    if(ob  == 6)
    {
        v->setColor(pr,pg,pb,1.0);
        v->cutBox(mx,mx+5,my,my+5,5,10);
    }
    if(ob == 7 )
    {
        v->setColor(pr,pg,pb,1.0);
        v->putEllipsoid(mx,my,5,3,4,5);
    }
    if(ob == 8)
    {
        v->setColor(pr,pg,pb,1.0);
        v->cutEllipsoid(mx,my,5,3,4,5);
    }

    repaint();
}

void Plotter::returnR(int _r)
{
    pr = _r;
}

void Plotter::returnG(int _g)
{
    pg = _g;
}

void Plotter::returnB(int _b)
{
    pb = _b;
}


