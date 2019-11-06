#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QWidget>

namespace Ui {
class mainwindow2;
}

class mainwindow2 : public QWidget
{
    Q_OBJECT

public:
    explicit mainwindow2(QWidget *parent = 0);
    ~mainwindow2();

private:
    Ui::mainwindow2 *ui;
};

#endif // MAINWINDOW2_H
