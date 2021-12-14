#ifndef TRANSPUESTA_H
#define TRANSPUESTA_H
#include"matriz.h"

class transpuesta:public Matriz
{
public:
    transpuesta():Matriz(){};
    transpuesta(int fila, int columna):Matriz(fila, columna){};
   virtual ~transpuesta();
   virtual  void ver();
};

#endif // TRANSPUESTA_H
