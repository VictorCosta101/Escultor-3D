#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <vector>
#include <QString>


Plotter::Plotter(QWidget *parent) : QWidget(parent)
{
    v = new  Sculptor(21,11,11);

    dimX = 21; dimY = 11; dimZ = 11;

    pr=255;pg=255;pb=255;

    dim = 5;

    teste = false;
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
    cout<<"Plotter pr : "<<pr<<endl;

    for( int i = 0 ; i < dimX; i++)
    {
        for(int j = 0 ; j < dimY; j++)
        {
            if(p[i][j][dim].isOn){


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
void Plotter::mouseMoveEvent(QMouseEvent *event)
{
    mx=event->x();
    my=event->y();
    mx = mx/tamX;
    my = my/tamY;

    emit mouseX(event->x());
  emit mouseY(event->y());
    criarObjeto(fig);
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
        v->putBox(mx,mx+bx,my,my+by,dim,dim+bz);
    }
    if(ob  == 6)
    {
        v->setColor(pr,pg,pb,1.0);
        v->cutBox(mx,mx+bx,my,my+by,dim,dim+bz);
    }
    if(ob == 7 )
    {
        v->setColor(pr,pg,pb,1.0);
        v->putEllipsoid(mx,my,dim,erx,ery,erz);
    }
    if(ob == 8)
    {
        v->setColor(pr,pg,pb,1.0);
        v->cutEllipsoid(mx,my,dim,erx,ery,erz);
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
    repaint();
}

void Plotter::returnB(int _b)
{

    pb = _b;
    repaint();
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



}

void Plotter::modificaDimY(int _y)
{

    dimY = _y;

}

void Plotter::modificaDimZ(int _z)
{

    dimZ = _z;


}

void Plotter::criarNovaMatriz()
{
   cout<<"cnm"<<endl;
   cout<<"Dim x : "<<dimX<<endl;
   cout<<"Dim y : "<<dimY<<endl;
   cout<<"Dim z : "<<dimZ<<endl;
   v->~Sculptor();
   v = new Sculptor(dimX,dimY,dimZ);

   repaint();
}

void Plotter::deletarMatriz()
{
    v->~Sculptor();
    teste =true;
}

void Plotter::modificaBoxX(int _x)
{
    bx = _x;
    repaint();
}

void Plotter::modificaBoxY(int _y)
{
    by = _y;
    repaint();
}

void Plotter::modificaBoxZ(int _z)
{
    bz = _z;
    repaint();
}

void Plotter::modificaElliRx(int _x)
{
    erx = _x;
    repaint();
}

void Plotter::modificaElliRy(int _y)
{
    ery = _y;
    repaint();
}

void Plotter::modificaElliRz(int _z)
{
    erz = _z;
    repaint();
}

void Plotter::salvarDesenho()
{
    //string objeto ="objeto1";

    //v->writeOFF("C:/Users/Victor/Desktop/testeObjeto/objeto1.off");
    v->writeOFF("C:/Users/UFRNLAB/Desktop/objeto1.off");

}






