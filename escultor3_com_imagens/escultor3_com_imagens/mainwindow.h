#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow();
public slots:
    void pVoxel();
    void cVoxel();
    void pSphere();
    void cSphere();
    void pBox();
    void cBox();
    void pEllipsoid();
    void cEllipsoid();

    //Salvar e abrir arquivos
    void salvar();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
