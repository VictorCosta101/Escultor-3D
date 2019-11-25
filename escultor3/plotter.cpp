#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <vector>


Plotter::Plotter(QWidget *parent) : QWidget(parent)
{
    dimX = 21; dimY = 11; dimZ = 11;
    v = new  Sculptor(dimX,dimY,dimZ);

    pr=255;pg=255;pb=255;

    dim = 5;

    // variaveis dos objetos

    r = 5;
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

    tamX = width()/dimX;
    tamY = height()/dimY;

    for(int i = 0; i < dimX; i++)
    {
        for(int j = 0 ; j < dimY ; j++)
        {
            painter.drawRect(i*tamX,j*tamY,tamX,tamY);
        }
    }
    //copiar matriz do sculptor
    p.clear();
    p = v->copyM(dim);

    // plotar os Voxels ativos

    for( int i = 0 ; i < 20; i++)
    {
        for(int j = 0 ; j < 10; j++)
        {
            if(p[i][j][dim].isOn){
                cout<<"i = "<<i<<" // j = "<<j<<endl;

                pen.setColor(QColor(0,0,0));
                //pen.setWidth(2);
                brush.setColor(QColor(p[i][j][dim].r,p[i][j][dim].g,p[i][j][dim].b));
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
        v->putVoxel(mx,my,dim);
    }
    if(ob == 2)
    {
        v->setColor(pr,pg,pb,1.0);
        v->cutVoxel(mx,my,dim);
    }
    if(ob == 3)
    {
        v->setColor(pr,pg,pb,1.0);
        v->putSphere(mx,my,dim,r);
    }
    if( ob == 4)
    {
        v->setColor(pr,pg,pb,1.0);
        v->cutSphere(mx,my,dim,r);

    }
    if( ob == 5)
    {
        v->setColor(pr,pg,pb,1.0);
        v->putBox(mx,mx+5,my,my+5,dim,dim+10);
    }
    if(ob  == 6)
    {
        v->setColor(pr,pg,pb,1.0);
        v->cutBox(mx,mx+5,my,my+5,dim,dim+10);
    }
    if(ob == 7 )
    {
        v->setColor(pr,pg,pb,1.0);
        v->putEllipsoid(mx,my,dim,3,4,5);
    }
    if(ob == 8)
    {
        v->setColor(pr,pg,pb,1.0);
        v->cutEllipsoid(mx,my,dim,3,4,5);
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

void Plotter::modificaDim(int _dim)
{
    dim = _dim;
    repaint();
}

void Plotter::modificaRaioSphere(int _R)
{
    r = _R;
    repaint();
}

void Plotter::modificaDimX(int _x)
{
    dimX = _x;

    delete v;
    v = nullptr;
    v = new Sculptor(dimX,dimY,dimZ);
    repaint();
}

void Plotter::modificaDimY(int _y)
{
    dimY = _y;
    delete v;
    v = nullptr;
    v = new Sculptor(dimX,dimY,dimZ);
    repaint();
}

void Plotter::modificaDimZ(int _z)
{
    dimZ = _z;
    delete v;
    v = nullptr;
    v = new Sculptor(dimX,dimY,dimZ);
    repaint();
}



