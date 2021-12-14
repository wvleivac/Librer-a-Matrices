#ifndef GAUSSJ_H
#define GAUSSJ_H
#include<iostream>
#include<cmath>
#include "matriz.h"

class GaussJ:public Matriz
{
public:
    //Constructor
    GaussJ(int filas, int columnas):Matriz(filas, columnas){};
   //Destructor
    ~GaussJ();
    //otras funciones
    void Gauss();
    void Solucion();
};

#endif // GAUSSJ_H
