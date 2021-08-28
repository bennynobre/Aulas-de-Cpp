#include<iostream>

using namespace std;

int main(){

    int a=0, b=0, media=0;

    cin >> a >> b;
    media = (a+b)/2;

    if(media >= 7){
        cout << "Aprovado\n";
    }else if(media >= 4 or media < 7){
        cout << "Recuperacao\n";
    }else{
        cout << "Reprovado\n";
    }

    return 0;
}