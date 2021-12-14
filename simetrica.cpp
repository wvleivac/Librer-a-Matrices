#include "simetrica.h"
/*simetrica::~simetrica()
{

}*/

void simetrica::definir()
{
    char tipo ='F';
    if(filas()==columnas()){
        for(int i=0; i<filas_; i++){
            for(int j=0; j<columnas_; j++){
                if(elementos_[i][j]==elementos_[j][i]){
                    tipo='V';
                }
            }
        }
    }
    if(tipo=='V'){
        cout<<"La matriz es simetrica"<<endl;
    }
    else{
        cout<<"La matriz no es simetrica"<<endl;
    }

}

