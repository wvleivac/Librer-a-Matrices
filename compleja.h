#ifndef COMPLEJA_H
#define COMPLEJA_H
#include <iostream>
#include"matriz.h"
using std::ostream;

class compleja
{
private:
    int real, imag;
    float **img;
public:
    compleja(int, int);
    compleja();

//Otras funciones
    void setReal(int);
    const int getReal()const;
    void setIm(int);
    const int getIm()const ;
    void MostrarComp();
    void Escalar(int esc);

// Operadores
    friend ostream &operator <<(ostream &, compleja &);
    friend const compleja &operator+(const compleja &, const compleja &);
    friend const compleja &operator-(const compleja &, const compleja &);
    friend const compleja &operator*(const compleja &, const compleja &);
    friend const compleja &operator/(const compleja &, const compleja &);

};

#endif // COMPLEJA_H
