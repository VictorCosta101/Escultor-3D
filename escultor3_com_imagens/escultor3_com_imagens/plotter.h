#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QEvent>
#include "sculptor.h"
#include "plottercor.h"
#include <vector>
#include <QMouseEvent>
#include <string>


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

    // matriz que recebe a matriz de voxels do scultor no plotter

    vector<vector<vector<Voxel>>>p;

    // figuras

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
    bool teste;

    //Box

    int bx,by,bz;

    //Ellipsoid

    int erx, ery, erz;

signals:
    void mouseX(int);
    void mouseY(int);

public slots:
    // cores dos voxels widget_1

    void returnR(int _r);
    void returnG(int _g);
    void returnB(int _b);

    // dimensões da matriz de voxels

    void modificaDim(int _dim);
    void modificaDimX(int _x);
    void modificaDimY(int _y);
    void modificaDimZ(int _z);

    // deletar e criar matriz de voxels

    void criarNovaMatriz();
    void deletarMatriz();

    //dimensões da esfera

    void modificaRaioSphere(int _R);

    //dimensões do box

    void modificaBoxX(int);
    void modificaBoxY(int);
    void modificaBoxZ(int);

    //dimensoes do ellipsoid

    void modificaElliRx(int);
    void modificaElliRy(int);
    void modificaElliRz(int);

    void salvar(string a);



};

#endif // PLOTTER_H
