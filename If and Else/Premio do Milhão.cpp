#include<iostream>

using namespace std;

int main(){

    int n=0, a=0, dia=0, qtd=0;

    cin >> n;

    for(int i=1; i <= n; i++){
        cin >> a;

        if(dia != 0){
            continue;

        }else{

            qtd+=a;
        }

        if(qtd>=1000000){
            dia = i;
        }
    }

    cout << dia << endl;

    return 0;
}