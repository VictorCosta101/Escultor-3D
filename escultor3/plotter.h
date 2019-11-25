#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QEvent>
#include "sculptor.h"
#include <vector>
#include <QMouseEvent>


class Plotter : public QWidget
{
    Q_OBJECT
public:
    explicit Plotter(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void criarObjeto(int);

    //objeto sculptor

    Sculptor *v;

    vector<vector<vector<Voxel>>>p;

    int fig;
    //cores

    int pr,pg,pb;


    // variaveis do plotter:

    int tamX, tamY;
    int dim;
    int dimX,dimY,dimZ;

    // coordenadas do mouse
    int mx, my;

    //variaveis dos objetos

    //Sphere

    int r;


signals:
    void mouseX(int);
    void mouseY(int);

public slots:
    void returnR(int _r);
    void returnG(int _g);
    void returnB(int _b);
    void modificaDim(int _dim);
    void modificaRaioSphere(int _R);
    void modificaDimX(int _x);
    void modificaDimY(int _y);
    void modificaDimZ(int _z);


};

#endif // PLOTTER_H
