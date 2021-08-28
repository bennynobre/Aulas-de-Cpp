#include<iostream>

using namespace std;

int main(){

    int cino=0, bino=0, soma=0;

    cin >> cino >> bino;

    soma = cino + bino;

    if(soma%2 == 0){

        cout << "Bino";

    }else if(soma%2 != 0){

        cout << "Cino";
        
    }

    return 0;
}