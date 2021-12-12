#include <iostream>
#include <iomanip>
#include <string>
#include<stdlib.h>
#include <windows.h>
#include <math.h>
#include "matriz.h"
#include "gaussj.h"
#include"compleja.h"
#include "transpuesta.h"
#include "simetrica.h"
#include"operaciones.h"
#include<conio.h>
#include<cstdlib>
#include<cstdio>

using std::cout;
using std::endl;
using std::cin;
using std::setw;

int FILAS;
int COLUMNAS;
int contador=1;
int n;
int opcion;
int opc1;
int m;
bool salida=1;
int num;
int aleatorio;
int aleatorio2;



// Calculadora Matrices
void multiplicacionEscalar();

void gaussJordan();

void transpuestaMatriz();

void operacionMatrices();

void Simetrica();

// Operaciones con Matrices

void sumaMatrices();

void restaMatrices();

void multiplicacionMatrices();

// Complejos
void complejos();

void sumaComplejos();

void restaComplejos();

void productoComplejos();

void escalarComplejos();

// Utilidades
void imprimirSeparador();

void imprimirMenu();

void imprimirEncabezado();


int main() {
    //system("color fd");
    system("color f4");
    imprimirEncabezado();
    Sleep(10);

    do {
        imprimirMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                 operacionMatrices();
                break;
            case 2:
                 multiplicacionEscalar();
            break;

            case 3:
                gaussJordan();
                break;
            case 4:
                transpuestaMatriz();
            break;
            case 5:
                  Simetrica();
             break;
            case 6:
                   complejos();
            break;
            case 7:
                // Salir
                break;
        }

    } while (opcion != 7);
    cout<<"\n   HAS DECIDIDO SALIR  "<<endl;
    cout<<" \n  A --- D --- I--- O--- S \n"<<endl;

    return 0;
}



/**
 * Calculadora para Matrices
 */
void Simetrica(){
    imprimirSeparador();

    do{
        cout << "========     USTED ELIGIO:   Matrices simetricas   ========" << endl;
        cout << "\nIngrese los valores para filas y columnas respectivamente para la matriz \n" << endl;
        cin >> FILAS;
        cin >> COLUMNAS;
        cout<<"Desea calcular la operacion con numeros aleatorios o desea ingresar los datos"<<endl;
        cout<<" 1.) Aleatorios    2.) Ingresar datos "<<"__";
        aleatorio=1+rand()%(101-1);
        cin>>num;
        Matriz *m1[0];
        simetrica *S1=new simetrica(FILAS, COLUMNAS);
        if(num==1){
            for (int i = 0; i < FILAS; i++) {
                for (int j = 0; j < COLUMNAS; j++) {
                    S1->llenarElemento(i, j, aleatorio++);
                }
            }
                    }
        else{

        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << " Ingrese los valores para la MATRIZ A: " << endl;
                cin >> contador;
                S1->llenarElemento(i, j, contador++);
            }
        }
       }
       imprimirSeparador();
        m1[0]=S1;
        m1[0]->ver();
        simetrica *S;
        imprimirSeparador();
        S=static_cast <simetrica  *>(m1[0]);
        S->ver();
        imprimirSeparador();
        S1->definir();
        imprimirSeparador();
        delete S;

        cout << "\n Elija una opcion \n"
             << endl;
        cout << "\n 1.  Encontrar otra solucion "
             << "\n 0.  Salir  " << endl;
        cout << "OPCION  ";
        cin >> m;
        if (m == 0) {
           exit(0);
        }
      } while (salida);

}
void complejos(){
    do {
        imprimirSeparador();
        cout << "========   USTED ELIGIO:   COMPLEJOS   ========" << endl;
        cout << "\n1.- Suma de complejos " << endl;
        cout << "\n2.- Resta de complejos " << endl;
        cout << "\n3.- Producto de complejos " << endl;
        cout << "\n4.- Producto escalar complejo " << endl;
        cout << "\n5.- Salir " << endl;
        cout << "\n OPCION:  ";
        cin >> opc1;

        switch (opc1) {

            case 1:
                 sumaComplejos();
            break;
            case 2:
                restaComplejos();
            break;
            case 3:
                 productoComplejos();
           break;
           case 4:
                  escalarComplejos();
            break;
            case 5:
                // Salir
            default:
                break;
        }
    } while (opc1 != 5);
    cout << "\t";
    cout << "USTED HA DECIDIDO SALIR" << endl;
    cout << "\t";
    cout << "ADIOS" << endl;

    exit(0);

}
void sumaComplejos(){
    imprimirSeparador();
    cout << "========         USTED ELIGIO:   Suma de dos complejos      ========" << endl;
    int a, b, c, d;
    do{
    cout<< " Ingrese los valores para el primer complejo  " << endl;
    cin>>a>>b;
    compleja C1(a, b);
    C1.setIm(b);
    C1.setReal(a);

    cout<< " Ingrese los valores para el segundo complejo" << endl;
    cin>>c>>d;
    compleja C2(c, d);
    C2.setIm(d);
    C2.setReal(c);

    compleja C3;
    C3=C1+C2;
    C1.MostrarComp();
    C2.MostrarComp();
    cout<<"-------- S  U  M  A --------- :"<<endl;
    C3.MostrarComp();
    cout << "\n Elija una opcion \n"
         << endl;
    cout << "\n 1.  Realizar otra solucion "
         << "\n 0.  Salir  " << endl;
    cout << "OPCION  ";
    cin >> m;
    if (m == 0) {
       exit(0);
    }
  } while (salida);

}

void restaComplejos(){
    imprimirSeparador();
    cout << "========         USTED ELIGIO:   Resta de dos complejos      ========" << endl;
    int a, b, c, d;
    do{
    cout<< " Ingrese los valores para el primer complejo  " << endl;
    cin>>a>>b;
    compleja C1(a, b);
    C1.setIm(b);
    C1.setReal(a);

    cout<< " Ingrese los valores para el segundo complejo" << endl;
    cin>>c>>d;
    compleja C2(c, d);
    C2.setIm(d);
    C2.setReal(c);

    compleja C3;
    C3=C1-C2;
    C1.MostrarComp();
    C2.MostrarComp();
    cout<<"-------- R  E  S  T  A  --------- :"<<endl;
    C3.MostrarComp();
    cout << "\n Elija un opcion \n"
         << endl;
    cout << "\n 1.  Realizar otra solucion "
         << "\n 0.  Salir  " << endl;
    cout << "OPCION  ";
    cin >> m;
    if (m == 0) {
       exit(0);
    }
  } while (salida);

}

void productoComplejos(){
    imprimirSeparador();
    cout << "========         USTED ELIGIO:   Producto de dos complejos      ========" << endl;
    int a, b, c, d;
    do{
    cout<< " Ingrese los valores para el primer complejo  " << endl;
    cin>>a>>b;
    compleja C1(a, b);
    C1.setIm(b);
    C1.setReal(a);

    cout<< " Ingrese los valores para el segundo complejo" << endl;
    cin>>c>>d;
    compleja C2(c, d);
    C2.setIm(d);
    C2.setReal(c);

    compleja C3;
    C3=C1*C2;
    C1.MostrarComp();
    C2.MostrarComp();
    cout<<"-------- P  R  O   D  U  C  T  O  --------- :"<<endl;
    C3.MostrarComp();
    cout << "\n Elija una opcion \n"
         << endl;
    cout << "\n 1.  Realizar otra solucion  "
         << "\n 0.  Salir  " << endl;
    cout << "OPCION  ";
    cin >> m;
    if (m == 0) {
       exit(0);
    }
  } while (salida);
}

void escalarComplejos(){
    int a, b;
    do{
    cout<< " Ingrese los valores para  complejo  " << endl;
    cin>>a>>b;
    compleja C1(a, b);
    C1.setIm(b);
    C1.setReal(a);
    C1.MostrarComp();
    cout << "\n         Ingrese el valor del escalar:   ";
    cin >> n;
    C1.Escalar(n);
    cout << "\n Elija una opcion \n"
         << endl;
    cout << "\n 1.  Realizar otra solucion  "
         << "\n 0.  Salir  " << endl;
    cout << "OPCION  ";
    cin >> m;
    if (m == 0) {
       exit(0);
    }
  } while (salida);
}
void gaussJordan() {
    imprimirSeparador();

    cout << "========       USTED ELIGIO:   GAUSS JORDAN    ========" << endl;

    do {

        cout << "\nIngrese el numero de filas y columnas respectivamente para la matriz A \n"
             << endl;
        cin >> FILAS;
        cin >> COLUMNAS;
        cout<<"Desea calcular la operacion con numeros aleatorios o desea ingresar los datos"<<endl;
        cout<<"1. Aleatorios    2. Ingresar datos "<<endl;
        aleatorio=1+rand()%(101-1);
        cin>>num;
        GaussJ J1(FILAS, COLUMNAS);
        if(num==1){
            for (int i = 0; i < FILAS; i++) {
                for (int j = 0; j < COLUMNAS; j++) {
                    J1.llenarElemento(i, j, aleatorio++);
                }
            }
                    }
        else{

        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << " Ingrese los valores para la MATRIZ A: " << endl;
                cin >> contador;
                J1.llenarElemento(i, j, contador++);
            }
        }
       }
        J1.ver();
        imprimirSeparador();
        J1.Gauss();
        J1.Solucion();
        imprimirSeparador();

        cout << "\nDesea encontrar otra solucion por Gauss Jordan o salir \n"
             << endl;
        cout << "\n 1.  Realizar otra solucion por Gauss- Jordan "
             << "\n 0.  Salir  " << endl;
        cout << "OPCION  ";
        cin >> m;
        if (m == 0) {
           exit(0);
        }
      } while (salida);
    }

void transpuestaMatriz() {
    imprimirSeparador();
    cout << "========       USTED ELIGIO:   Transpuesta de una matriz     ========" << endl;

    do {

        cout << "\nIngrese los valores para filas y columnas respectivamente para la matriz A \n"
             << endl;
        cin >> FILAS;
        cin >> COLUMNAS;
        cout<<"Desea calcular la operacion con numeros aleatorios o desea ingresar los datos"<<endl;
        cout<<"1. Aleatorios    2. Ingresar datos "<<endl;
        cin>>num;
        aleatorio=1+rand()%(101-1);
        Matriz *m1[0];
        transpuesta *M1=new transpuesta(FILAS, COLUMNAS);
        if(num==1){
            for (int i = 0; i < FILAS; i++) {
                for (int j = 0; j < COLUMNAS; j++) {
                    M1->llenarElemento(i, j, aleatorio++);
                }
            }
                    }
        else{

        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << " Ingrese los valores para la MATRIZ A: " << endl;
                cin >> contador;
                M1->llenarElemento(i, j, contador++);
            }
        }
       }

        m1[0]=M1;
        imprimirSeparador();
        m1[0]->ver();
        imprimirSeparador();
       transpuesta *T;
       T=static_cast <transpuesta *>(m1[0]);
       T->ver();
       delete M1;
       imprimirSeparador();
       cout << "\nDesea ingresar otra matriz para ver su transpuesta o Salir \n" << endl
             << "\n 1.  Otra matriz transpuesta "
             << "\n 0.  Salir  " << endl
             << "OPCION ";
             cin >> m;
        if (m == 0) {
            exit(0);
        }
    } while (salida);
}

void operacionMatrices() {
    do {
        imprimirSeparador();
        cout << "========   USTED ELIGIO:   OPERACIONES CON MATRICES   ========" << endl;
        cout << "\n1.- Suma de matrices " << endl;
        cout << "\n2.- Resta de matrices " << endl;
        cout << "\n3.- Producto de dos matrices " << endl;
        cout << "\n4.- Salir " << endl;
        cout << "\n OPCION:  ";
        cin >> opc1;

        switch (opc1) {

            case 1:
                 sumaMatrices();
            break;
            case 2:
                restaMatrices();
            break;
            case 3:
                 multiplicacionMatrices();
           break;
            case 4:
                // Salir
            default:
                break;
        }
    } while (opc1 != 4);
    cout << "\t";
    cout << "USTED HA DECIDIDO SALIR" << endl;
    cout << "\t";
    cout << "ADIOS" << endl;

    exit(0);
}

/**
 * Operaciones con Matrices
 */

void multiplicacionEscalar() {
    imprimirSeparador();
    cout << "========     USTED ELIGIO:   Multiplicacion por un escalar    ========" << endl;
    cout << "\nIngrese los valores para filas y columnas respectivamente para la matriz \n" << endl;
    cin >> FILAS;
    cin >> COLUMNAS;

    do {
        Matriz M4(FILAS, COLUMNAS);

        // Ingresamos la matriz
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << "Ingrese los valores: " << endl;
                cin >> contador;
                M4.llenarElemento(i, j, contador++);
            }
        }
        cout << "\n         Ingrese el valor del escalar:   ";
        cin >> n;
        imprimirSeparador();
        M4.ver(); // Imprimimos la matriz antes de realizar la operación
        imprimirSeparador();
        M4.escalar(n); //Realizamos la multiplicación escalar
        M4.ver(); // Imprimimos el resultado
        imprimirSeparador();

        cout << "     Desea multiplicar otra matriz con un escalar   " << endl;
        cout << "\n 1.  Realizar otro producto "
             << "\n 0.  Salir  " << endl;
        cout << "  OPCION ";
        cin >> m;

        if (m == 0) {
            exit(0);
        }
    } while (salida);

}

   void sumaMatrices() {
    imprimirSeparador();
    cout << "========         USTED ELIGIO:   Suma de dos matrices           ========" << endl;

    do {
        cout << "\nIngrese los valores para filas y columnas respectivamente para la matriz A \n" << endl;
        cin >> FILAS;
        cin >> COLUMNAS;
        cout<<"Desea calcular la operacion con numeros aleatorios o desea ingresar los datos"<<endl;
        cout<<"1. Aleatorios    2. Ingresar datos "<<endl;
        Matriz M1(FILAS, COLUMNAS);
        Matriz M2(FILAS, COLUMNAS);
        aleatorio=1+rand()%(101-1);
        cin>>num;
        if(num==1){
            for (int i = 0; i < FILAS; i++) {
                for (int j = 0; j < COLUMNAS; j++) {
                    M1.llenarElemento(i, j, aleatorio++);
                }
            }
            for (int i = 0; i < FILAS; i++) {
                for (int j = 0; j < COLUMNAS; j++) {
                    M2.llenarElemento(i, j, aleatorio++);
                }
            }
        }
        else{

        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << " Ingrese los valores para la MATRIZ A: " << endl;
                cin >> contador;
                M1.llenarElemento(i, j, contador++);
            }
        }
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << " Ingrese los valores para la MATRIZ B: " << endl;
                cin >> contador;
                M2.llenarElemento(i, j, contador++);
            }
        }
        }
        cout << "  La matriz A es: \n"
             << endl;
        M1.ver();
        imprimirSeparador();
        cout << "  La matriz B es: \n"
             << endl;
        M2.ver();
        imprimirSeparador();
        Matriz M3;
        M3 = M1 + M2;
        M3.ver();
        imprimirSeparador();     

        cout << "\nDesea realizar otra suma o salir" << endl;
        cout << "\n 1.  Realizar otra suma "
             << "\n 0.  Salir  " << endl;
        cout << "OPCION ";
        cin >> m;
        if (m == 0) {
            exit(0);
        }

    } while (salida);
}

   void restaMatrices() {
     imprimirSeparador();
    cout << "========         USTED ELIGIO:   Resta de dos matrices           ========" << endl;

    do {
        cout << "\nIngrese los valores para filas y columnas respectivamente para la matriz A \n" << endl;
        cin >> FILAS;
        cin >> COLUMNAS;
        cout<<"Desea calcular la operacion con numeros aleatorios o desea ingresar los datos"<<endl;
        cout<<"1. Aleatorios    2. Ingresar datos "<<endl;
        Matriz M1(FILAS, COLUMNAS);
        Matriz M2(FILAS, COLUMNAS);
        aleatorio=1+rand()%(101-1);
        aleatorio2=1+rand()%(101-1);
        cin>>num;
        if(num==1){
            for (int i = 0; i < FILAS; i++) {
                for (int j = 0; j < COLUMNAS; j++) {
                    M1.llenarElemento(i, j, aleatorio++);
                }
            }
            for (int i = 0; i < FILAS; i++) {
                for (int j = 0; j < COLUMNAS; j++) {
                    M2.llenarElemento(i, j, aleatorio2++);
                }
            }
        }
        else{

        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << " Ingrese los valores para la MATRIZ A: " << endl;
                cin >> contador;
                M1.llenarElemento(i, j, contador++);
            }
        }
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << " Ingrese los valores para la MATRIZ B: " << endl;
                cin >> contador;
                M2.llenarElemento(i, j, contador++);
            }
        }
        }
        cout << "  La matriz A es: \n"
             << endl;
        M1.ver();
        imprimirSeparador();
        cout << "  La matriz B es: \n"
             << endl;
        M2.ver();
        imprimirSeparador();
        Matriz M3;
        M3 = M1 - M2;
        M3.ver();
        imprimirSeparador();
        cout << "\nDesea realizar otra resta o salir" << endl;

        cout << "\n 1.  Realizar otra resta "
             << "\n 0.  Salir  " << endl;
        cout << "OPCION ";
        cin >> m;
        if (m == 0) {
            exit(0);
        }

    } while (salida);
}


void multiplicacionMatrices() {
    imprimirSeparador();
    cout << "========       USTED ELIGIO:   Multiplicacion de dos matrices     ========" << endl;

    do {

        cout << "\nIngrese los valores para filas y columnas respectivamente para la matriz A \n"
             << endl;
        cin >> FILAS;
        cin >> COLUMNAS;
        cout<<"Desea calcular la operacion con numeros aleatorios o desea ingresar los datos"<<endl;
        cout<<"1. Aleatorios    2. Ingresar datos "<<endl;
        aleatorio=1+rand()%(101-1);
        aleatorio2=1+rand()%(101-1);
        cin>>num;
        Matriz M1(FILAS, COLUMNAS);
        if(num==1){
            for (int i = 0; i < FILAS; i++) {
                for (int j = 0; j < COLUMNAS; j++) {
                    M1.llenarElemento(i, j, aleatorio++);
                }
            }
                    }
        else{

        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << " Ingrese los valores para la MATRIZ A: " << endl;
                cin >> contador;
                M1.llenarElemento(i, j, contador++);
            }
        }
       }
        cout << "\nIngrese los valores para filas y columnas respectivamente para la matriz B \n"
             << endl;
        cin >> FILAS;
        cin >> COLUMNAS;
        cout<<"Desea calcular la operacion con numeros aleatorios o desea ingresar los datos"<<endl;
        cout<<"1. Aleatorios    2. Ingresar datos "<<endl;
        Matriz M2(FILAS, COLUMNAS);
        if(num==1){
            for (int i = 0; i < FILAS; i++) {
                for (int j = 0; j < COLUMNAS; j++) {
                    M2.llenarElemento(i, j, aleatorio2++);
                }
            }
                    }
        else{

        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                cout << " Ingrese los valores para la MATRIZ A: " << endl;
                cin >> contador;
                M2.llenarElemento(i, j, contador++);
            }
        }
       }

            cout << " La matriz A es: \n"
             << endl;
            M1.ver();
            imprimirSeparador();
            cout << " La matriz B es: \n"
              << endl;

            M2.ver();
            Matriz M3;
            imprimirSeparador();
            M3 = M1 * M2;
            M3.ver();


        cout << "\nDesea realizar otra multiplicacion o Salir \n" << endl
             << "\n 1.  Realizar otra multiplicacion "
             << "\n 0.  Salir  " << endl
             << "OPCION ";

        cin >> m;
        if (m == 0) {
            exit(0);
        }

    } while (salida);
}

/**
 * Utilidades
 */
void imprimirSeparador() {
    cout << "********************************************************************" << endl;
}

void imprimirEncabezado() {
    cout << "\t\t '           PROGRAMACION II              ' \n";
    cout << "\t\t '20172000635  YENCY CAROLINA MATUTE AMAYA' \n";
    cout << "\t\t '20142002350  WENDY VANESSA LEIVA CASTELLANOS ' \n";
    cout << "\n\t\t  ...CALCULADORA DE MATRICES... \n\n\t\t ";
}

void imprimirMenu() {
    cout << "Que desea calcular?" << endl;
    cout << "\n1.- Operaciones con matrices " << endl;
    cout << "\n2.- Producto por un escalar " << endl;
    cout << "\n3.- Solucion de Sistemas " << endl;
    cout << "\n4.- Transpuesta de una matriz" << endl;
    cout << "\n5.- Matriz Simetrica" << endl;
    cout << "\n6.- Complejos " << endl;
    cout << "\n7.- Salir " << endl;
    cout << "\n OPCION:  ";
}





