#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include "sculptor.h"
#include <vector>

class Plotter : public QWidget
{
    Q_OBJECT
public:

    Sculptor *s;

    vector<Voxel> objetos;

    //mouse
    int mx,my;

    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);



signals:
void mouseX(int);
void mouseY(int);
public slots:

void voxel();
};

#endif // PLOTTER_H
