#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <cmath>
#include <QTimerEvent>
#include <QMouseEvent>
#include <QDebug>
#include <QMenu>
#include <QMessageBox>



Plotter::Plotter(QWidget *parent):QWidget (parent)
{
      backR = 255;
      backG = 255;
      backB = 0;
}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
      QPen pen;
      QBrush brush;

      // o uso de Antialiasing reduz o
      // SERRILHAMENTO DAS LINHAS
      painter.setRenderHint(QPainter::Antialiasing);

      pen.setColor(QColor(255,0,0));
      brush.setColor(QColor(backR,backG,backB));
      brush.setStyle(Qt::SolidPattern);

      painter.setPen(pen);
      painter.setBrush(brush);

      painter.drawRect(0,0,width()-2,height()-2);
}