#include<iostream>
using namespace std;

int main(){

    int n=0, cont=0;
    string prova;
    string resp;

    cin >> n;
    cin >> prova;
    cin >> resp;

    for(int i=0; i < (int)prova.size(); i++){
        if(prova[i] == resp[i]){
            cont++;
        }
    }
    cout << cont;

    return 0;
}