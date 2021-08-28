#include<iostream>
using namespace std;

int main(){

    int x=0, cont=0;
    cin >> x;
    int vet[x];

    for(int i=0; i < x; i++){
        cin >> vet[i];
    }
    for(int i=0; i+2 < x; i++){

      if (vet[i] == 1 and vet[i+1] == 0 and vet[i+2] == 0){
                    cont++;
        }

    }
    
    cout << cont << endl;

    return 0;
}