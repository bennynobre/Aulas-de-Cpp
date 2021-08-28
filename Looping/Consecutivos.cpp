#include<iostream>
using namespace std;

int main(){

    int n=0, x=0, y=0, cont=1, maior=0;
    cin >> n >> y;

    for(int i=1; i < n; i++){
        cin >> x;

        if(y == x){
            cont++;
        }else{
            cont = 1;
        }
        maior = max(cont,maior);
        y=x;
    }
    cout << maior;

    return 0;
}