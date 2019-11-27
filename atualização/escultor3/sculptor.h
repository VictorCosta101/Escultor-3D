#ifndef SCULPTOR_H
#define SCULPTOR_H

#include <iostream>
#include <vector>

using namespace  std;

//estruct para os voxels

struct Voxel {


    // cores

    float r,g,b;

    // Transparencia

    float a;

    // incluir ou não

    bool isOn;
};

//classe para gerar os voxels

class Sculptor {

protected:

    Voxel ***v;

    // 3D matrix

    // dimensoes

    int nx,ny,nz;

    // cores

    float r,g,b,a;

public:

    // Alocacao da matriz em 3 dimensoes

    Sculptor(int _nx, int _ny, int _nz);

    // libera a matriz alocada

    ~Sculptor();

    //Determina uma cor, no sistema RGB, e a trasparecia dos Voxels

    void setColor(float r, float g, float b, float alpha);

    //ativa um voxel

    void putVoxel(int x, int y, int z);

    //remove um voxel

    void cutVoxel(int x, int y, int z);

    // cria uma sequencia de voxel em formato de quadrado/retangulo

    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);

    // Remove a sequencia de Voxels

    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);

    //cria uma esfera

    void putSphere(int xcenter, int ycenter, int zcenter, int radius);

    // remove uma esfera

    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);

    //cria um elipsoide

    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

    //remove um elipsoide

    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

    // Cria uma aquivo OFF com as informações do objeto criado

    void writeOFF(string filename);

    vector<vector<vector<Voxel>>> copyM(int);

};

#endif // SCULPTOR_H
