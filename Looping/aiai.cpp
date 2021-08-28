#include<iostream>
using namespace std;

int main(){

    int n=0, j=0, maior=0;
    cin >> n;

    int A[n][n];

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cin >> A[i][j];

            if(A[i][j] > maior){
                maior = A[i][j];
            }
        }
    }
    int soma1=0, soma2=0, soma3=0;


    for(int i=0; i < n; i++){
        soma1 += A[0][i];
        }
    for(int i=0; i < n; i++){
        soma2 += A[i][0];
        }
    for(int i=0; i < n; i++){
        soma3 += A[i][i];
        }
          
    if((soma1 == soma2 and soma1 == soma3) and maior == n*n){
          cout << soma1;      
    }else{
        cout << "-1";
    }

    return 0;
}