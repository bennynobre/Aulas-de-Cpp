#include<iostream>
using namespace std;

int main(){

    int n=0, lata=0, copo=0, quebrado=0;

    cin >> n;
    
    for(int i=0; i < n; i++){

            cin >> lata >> copo;
            if(lata > copo){
            quebrado = quebrado + copo;
        }
    }
     cout << quebrado;

    return 0;
}