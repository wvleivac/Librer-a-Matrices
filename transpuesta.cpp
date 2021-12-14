#include "transpuesta.h"

transpuesta::~transpuesta()
{

}

void transpuesta::ver()
{
       for (int i=0; i<filas_; i++){
          for(int j=0; j<columnas_; j++){

              cout<< elementos_[j][i]<<"\t";
            }
            cout<<endl;
        }
}
