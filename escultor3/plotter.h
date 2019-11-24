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

    // coordenadas do mouse
    int mx, my;


signals:
    void mouseX(int);
    void mouseY(int);

public slots:
    void returnR(int _r);
    void returnG(int _g);
    void returnB(int _b);

};

#endif // PLOTTER_H
