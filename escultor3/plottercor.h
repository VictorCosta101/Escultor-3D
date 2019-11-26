#ifndef PLOTTERCOR_H
#define PLOTTERCOR_H
#include "plotter.h"
#include <QWidget>

class PlotterCor : public QWidget
{
    Q_OBJECT
public:
    explicit PlotterCor(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event);

    //RGB

    int r,g,b;

signals:

public slots:
    void returnR(int);
    void returnG(int);
    void returnB(int);
};

#endif // PLOTTERCOR_H
