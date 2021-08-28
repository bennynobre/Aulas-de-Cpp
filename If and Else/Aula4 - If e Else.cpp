#include<iostream>

using namespace std;

int main(){

    int x=0;
    cin >> x;

    if(x > 0 and x%2 == 0){
        cout << "x positivo e par\n";
    }else if(x < 0 or x%2 ==0){
        cout << "x negativo ou impar\n";
    }

    return 0;
}