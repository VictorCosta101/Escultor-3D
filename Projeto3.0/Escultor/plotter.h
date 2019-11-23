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
    int fig = 1;

    //mouse
    int mx,my,cx,cy;


    int tam1, tam2;


    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    void Forma(int);
    void informForma(int);

private:
    vector<vector<vector<Voxel>>> p;

signals:
void mouseX(int);
void mouseY(int);
public slots:



};

#endif // PLOTTER_H
