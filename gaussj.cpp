#include "gaussj.h"
#include "matriz.h"
#include<iostream>
#include<iomanip>
using std::setw;
using std::abs;

GaussJ::~GaussJ()
{
    delete []elementos_;//Para eliminar esa memoria dinamica
}

void GaussJ::Gauss()
{
    for(int i=0; i<this->filas_; i++){
        double pivote;
        pivote = elementos_[i][i];
        double aux;
        if(elementos_[i][i] == 0.0)
                  {
         cout<<"\n\n n\n";

        }

        for(int k=0; k<this->columnas_; k++){
            elementos_[i][k]=elementos_[i][k]/pivote;

        }

        for(int j=0; j<this->filas_; j++){
            if(i!=j){
                aux=elementos_[j][i];
                for(int m=0; m<this->columnas_; m++){

                    elementos_[j][m]=elementos_[j][m]-aux*elementos_[i][m];

                }

            }

        }


        cout<<"----------------------------------------------------";
         cout<<"\n";
        for(int i=0; i<this->filas_; i++){

            for(int j=0; j<this->columnas_; j++){

                cout<<elementos_[i][j]<<"\t";
               }

            cout<<endl;
        }

    }
}

void GaussJ::Solucion()
{
    for(int i=0;i<this->filas_;i++){
          cout<<"\n x"<<i+1<<" = "<<elementos_[i][this->columnas_-1]<<endl;
    }
}
