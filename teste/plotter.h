#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QAction>

class Plotter:public QWidget
{
  Q_OBJECT
   private:
    int backR, backG, backB;

public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
};

#endif // PLOTTER_H
