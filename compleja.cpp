#include "compleja.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

compleja::compleja(int _real, int _imag)
{
    this->real = _real;
    this->imag = _imag;
}

compleja::compleja()
{
    this->real=0;
    this->imag=0;
}

void compleja::setReal(int _real)
{
    this->real = _real;

}

const int compleja::getReal() const
{
    return this->real;
}

void compleja::setIm(int _imag)
{
    this->imag = _imag;
}

const int compleja::getIm() const
{
    return this->imag;
}

void compleja::MostrarComp()
{
    cout<<"El numero Complejo es: "<<this->real<<"+"<<this->imag<<"i"<<endl;

}

void compleja::Escalar(int esc)
{
    int re= this->real*esc;
    int im= this->imag*esc;
    cout<<"La multiplicacion por un escalar es: "<<re<<"+"<<im<<"i"<<endl;
}


//friend
compleja const &operator+(const compleja &C1, const compleja &C2){
    int re = C1.real+C2.real;
    int im = C1.imag+C2.imag;
    compleja suma(re,im);

//	cout<<"La suma es: ";
    return *(new compleja(re, im));
}

compleja const &operator-(const compleja &C1, const compleja &C2){
    int re = C1.real-C2.real;
    int im = C1.imag-C2.imag;
    compleja Resta(re,im);

//	cout<<"La resta es: ";
    return *(new compleja(re, im));
}

compleja const &operator *(const compleja & C1, const compleja & C2){
    int re = C1.real * C2.real - C1.imag * C2.imag;
    int im = C1.imag * C2.real + C1.real * C2.imag;

    //cout<<"La Multiplicacion es: ";
    return *(new compleja(re,im));
}

compleja const &operator /(const compleja & C1, const compleja & C2){
    int re = C1.real / C2.real - C1.imag / C2.imag;
    int im = C1.imag / C2.real + C1.real / C2.imag;

    //cout<<"La Multiplicacion es: ";
    return *(new compleja(re,im));
}
