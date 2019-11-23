#include "sculptor.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace  std;

/* classe Sculptor
    gera objetos em 3D contruidos por Voxels;
*/



Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    /* * /metodo Sculptor faz a alocacao dinamica da matriz que recebera os Voxels*/
        nx = _nx; ny= _ny; nz= _nz;

   v = new Voxel**[_nx]();
    for(int i = 0; i < _nx;i++)
    {
        v[i]=new Voxel *[_ny]();
        for(int j = 0; j < _ny; j++){
            v[i][j]= new Voxel [_nz]();
        }
    }
}


Sculptor::~Sculptor()
{
    /*
     * /O destrutor libera a memoria do objeto alocado
    */
    for( int i =0;  i < nx; i++ ){
        for(int j= 0; j < ny; j++)
        {
            delete [] v[i][j];}
            delete [] v[i];
        }
    delete [] v;

}


void Sculptor::setColor(float r, float g, float b, float alpha)
{
    /*
     * /Atribui as cores, no sistema RGB, a cada Voxel, e Alpha a transparencia
*/
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=alpha;
}

void Sculptor::putVoxel(int x, int y, int z)
{
    /*
     * /Ativa cada Voxel e o atribui uma cor
*/

    if(x < nx && y < ny && z < nz)
    {
        v[x][y][z].isOn=true;
        v[x][y][z].r=r;
        v[x][y][z].g=g;
        v[x][y][z].b=b;
        v[x][y][z].a=a;
    }
    else {
        cout<<" Dimessoes erradas"<<endl;
        exit(1);
    }

}


void Sculptor::cutVoxel(int x, int y, int z)
{
    /*
     * /Remove o Voxel da coordenada (x,y,z)
    */
    v[x][y][z].isOn=false;
}


void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    /*
     * /Cria objetos quadrados/retungulares com Voxel nos intervalos [x0,x1],[y0,y1],[z0,z1]
*/
    if(x0 < nx && y0 < ny && z0 < nz)
    {
        for(int k = z0; k < z1; k++)
        {
            for(int j = y0 ; j < y1; j++)
            {
                for(int i = x0; i < x1; i++)
                    putVoxel(i,j,k);
            }
        }
    }
}


void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    /*
     * /Remove o objeto no Intervalo
*/
    if(x0 < nx && y0 < ny && z0 < nz)
    {
        for(int k = z0; k < z1; k++)
        {

            for(int j = y0 ; j < y1; j++)
            {
                for(int i = x0; i < x1; i++)
                    cutVoxel(i,j,k);
            }
        }
    }

}
//cria uma esfera
void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius)
{
    /*
     * Cria uma espera com centro em (xcente, ycenter, zcenter) e o raio, (radius)
*/
    int rd = radius; // variavel para armazenar o raio

    double dist;// variavel para calcular se um voxel pertence a esfera

    if(xcenter < nx && ycenter < ny && zcenter < nz)
    {

        for(int k = 0; k < nz; k++)
        {
            for(int j = 0 ; j < ny; j++)
            {

                for(int i = 0; i < nx; i++){
                    //equacao da esfera
                    dist = ((pow((xcenter-i),2)/(rd*rd))+(pow((ycenter-j),2)/(rd*rd))+(pow((zcenter-k),2)/(rd*rd)));
                      //condicao para o voxel pertencer a esfera
                    if(dist <=1){
                        putVoxel(i,j,k); // Ativa o Voxel, na posicao x,y,z ,caso os criterios seja satisfeitos

                    }
                }
            }
        }
    }
}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius)
{
    /* Remove a espera */
    if(xcenter < nx && ycenter < ny && zcenter < nz)
    {
        for(int k = zcenter; k < zcenter+ radius; k++)
        {
            for(int j = ycenter ; j < ycenter+ radius; j++)
            {
                for(int i = xcenter; i < xcenter+ radius; i++)
                    cutVoxel(i,j,k);
            }
        }
    }
}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
/*
 *  /Cria um Elipsoide
 *   /com centro em (xcenter, ycenter, zcenter)
 * /os 3 raios do elipsoide(rx, ry, rz)
*/

    double dist;
    if(xcenter < nx && ycenter < ny && zcenter < nz)
    {
        for(int k = 0; k < nz; k++)
        {
            for(int j = 0 ; j < ny; j++)
            {

                for(int i = 0; i < nx; i++){
                    //equacao do elipsoide
                    dist = ((pow((xcenter-i),2)/(rx*rx))+(pow((ycenter-j),2)/(ry*ry))+(pow((zcenter-k),2)/(rz*rz)));
                    //condicao para o Voxel pertencer ao elipsoide
                    if(dist <=1){
                        putVoxel(i,j,k);
                    }
                }
            }
        }
    }
}
//Remove o elipsoide
void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    if(xcenter < nx && ycenter < ny && zcenter < nz)
    {
        for(int k = zcenter; k < zcenter+rz; k++)
        {
            for(int j = ycenter ; j < ycenter+ry; j++)
            {
                for(int i = xcenter; i < xcenter+rx; i++)
                    cutVoxel(i,j,k);
            }
        }
    }
}

void Sculptor::writeOFF(string filename)
{

    ofstream objeto;

    int Nvert = 0;//variavel para o calculo de vertices
    int Nface = 0;// variavel para o calculo de faces
    int aux = 0; // variavel auxiliar

    // objeto.open("C:/Desktop"+filename+".off"); // local onde o arquivo OFF fica armazenado
    objeto.open("C:/Users/UFRNLAB/Desktop/"+filename+".off");
    if(objeto.is_open())// teste se o arquivo foi criado e está aberto
    {
        cout<<"O arquivo foi aberto \n";
    }
    else {
        cout<<" O arquivo não foi aberto \n";

        exit(1);

    }

    objeto << "OFF"<<endl; // 1ª linha, definicao do tipo de arquivo

    for(int i = 0 ; i < nx; i++)
    {

        for(int j = 0; j < ny ; j++)
        {
            for(int k = 0; k < nz; k++)
            {
                if(v[i][j][k].isOn)
                {
                    // Calculo do numero de faces e arestas
                    Nvert = Nvert + 8;
                    Nface = Nface + 6;
                }
            }
        }
    }


    objeto << Nvert << " " << Nface << " " << 0 << endl;// 2ª linha, número de vertices seguido pelo número de faces
    //Dimensionamento de cada vertice em relação a cada Voxel com isOn true
    for(int i = 0 ; i < nx ; i++){
        for(int j = 0 ; j < ny ; j++){
            for(int k = 0 ; k < nz ; k++){
                if(v[i][j][k].isOn){
                        objeto<<i-0.5<<" "<<j+0.5<<" "<<k-0.5<<endl;
                        objeto<<i-0.5<<" "<<j-0.5<<" "<<k-0.5<<endl;
                        objeto<<i+0.5<<" "<<j-0.5<<" "<<k-0.5<<endl;
                        objeto<<i+0.5<<" "<<j+0.5<<" "<<k-0.5<<endl;
                        objeto<<i-0.5<<" "<<j+0.5<<" "<<k+0.5<<endl;
                        objeto<<i-0.5<<" "<<j-0.5<<" "<<k+0.5<<endl;
                        objeto<<i+0.5<<" "<<j-0.5<<" "<<k+0.5<<endl;
                        objeto<<i+0.5<<" "<<j+0.5<<" "<<k+0.5<<endl;
                }
            }
        }
    }

    //Dimensionar cada face de cada Voxel e atribuindo as cores correspondente.
    for(int i=0 ; i < nx ; i++){
        for(int j = 0 ; j < ny ; j++){
            for(int k = 0; k < nz; k++){
                if(v[i][j][k].isOn){
                    objeto<<4<<" "<<aux+0<<" "<<aux+3<<" "<<aux+2<<" "<<aux+1<<" "<<
                            v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;

                    objeto<<4<<" "<<aux+4<<" "<<aux+5<<" "<<aux+6<<" "<<aux+7<<" "<<
                            v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;

                    objeto<<4<<" "<<aux+0<<" "<<aux+1<<" "<<aux+5<<" "<<aux+4<<" "<<
                            v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;

                    objeto<<4<<" "<<aux+0<<" "<<aux+4<<" "<<aux+7<<" "<<aux+3<<" "<<
                            v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;

                    objeto<<4<<" "<<aux+3<<" "<<aux+7<<" "<<aux+6<<" "<<aux+2<<" "<<
                            v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;

                    objeto<<4<<" "<<aux+1<<" "<<aux+2<<" "<<aux+6<<" "<<aux+5<<" "<<
                            v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                    aux=aux+8;
                }
            }
        }
    }

        if(objeto.is_open())
        {
            cout<<"Processo finalizado"<<endl;
        }

        objeto.close();
}

vector<vector<vector<Voxel>>> Sculptor::readM()
{


    vector<vector<vector<Voxel>>> l;

    l.resize(20);
    for (int i = 0; i < 20; i++)
    {
        l[i].resize(10);

        for (int j = 0; j < 10; j++)
        {
           l[i][j].resize(1);
        }
    }

    for(int i = 0; i < 20; i++)
    {

        for(int j = 0 ; j < 10; j++)
        {
            l[i][j][5].isOn = v[i][j][5].isOn;
            l[i][j][5].r    = v[i][j][5].r;
            l[i][j][5].g    = v[i][j][5].g;
            l[i][j][5].b    = v[i][j][5].b;
        }



    }


    return l;
}


int Sculptor::recR(int x, int y, int z)
{
    return v[x][y][z].r;
}
int Sculptor::recG(int x, int y, int z)
{
    return v[x][y][z].g;
}

int Sculptor::recB(int x, int y, int z)
{
    return v[x][y][z].b;
}
