#ifndef MATRIZ_H
#define MATRIZ_H
#include<iostream>
#include<cmath>
#include"compleja.h"
using std::cout;
using std::endl;
using std::cin;
using std::abs;
class Matriz
{
 public:
    int filas_;
    int columnas_; //El orden son las filas y las columnas
    double ** elementos_;
    void reservaMemoria();

    // Para crear una matriz necesitamos las dimensiones: filas y columnas.

    Matriz();
    Matriz(int filas, int columnas); // Constructor que le asignamos filas y columnas
    // Destructores
    ~Matriz();
    // Funciones set - establecer
    void establecerDimension(int filas, int columnas); //Le mandariamos las filas y columnas
    //Funciones get -
    int filas();
    int columnas();
    // Otras funciones
    void llenarElemento(int fila, int columna, double valor);
    void ver(); // Visualiza la matriz

    //Sobrecarga de operadores
    Matriz &operator+(Matriz &M);
    Matriz &operator=(Matriz &M); // Para imprimir la nueva matriz
    Matriz &operator*(Matriz &M);
    Matriz &operator-(Matriz &M);
    //Otras funciones
    void escalar(int esc);

};

#endif // MATRIZ_H
