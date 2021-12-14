#ifndef SIMETRICA_H
#define SIMETRICA_H
#include"transpuesta.h"

class simetrica:public transpuesta
{
public:
    simetrica():transpuesta(){};
    simetrica(int fila, int columna):transpuesta(fila, columna){};
    //~ simetrica();
     void definir();
};

#endif // SIMETRICA_H
