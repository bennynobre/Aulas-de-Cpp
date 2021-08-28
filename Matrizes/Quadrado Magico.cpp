#include<iostream>

using namespace std;

int main()
{

    int somaL, somaC, somaD, somaD1;
    int aux1=0, aux2=0, cont2=0;

    int cont = 3-1;
    int A[3][3];

    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
          cin >> A[i][j];
        }
    }

    somaL = somaC = somaD = somaD1 = 0;
    for(int i=0; i < 3; i++){

        somaD1 += A[cont][i];
        somaD += A[i][i];
        cont--;

    for(int j=0; j < 3; j++){

        somaL += A[i][j];
        somaC += A[j][i];

      }

      if(aux1 != somaL and i>0){

          cont2++;
          break;
      }
      if(aux2 != somaC and i>0){

          cont2++;
          break;
      }

      aux1 = somaL;
      aux2 = somaC;

      somaL = 0;
      somaC = 0;
    }

    if(cont2 == 0 and somaD == somaD1 and somaD==aux1 and aux2==somaD){
      cout << "sim";
    }else{
      cout << "nao";
    }


    return 0;
}