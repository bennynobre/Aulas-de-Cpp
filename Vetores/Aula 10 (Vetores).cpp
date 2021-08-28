#include<iostream>
using namespace std;

int main(){

    int n=0;
    int campo[55];

    cin >> n;

    for(int i=0; i < n; i++){
        cin >> campo[i];
    }
    for(int i=0; i < n; i++){
        int qtd=0;
        qtd += campo[i];

        if(i < n-1){
            qtd += campo[i+1];
        }
        if(i > 0){
            qtd += campo[i-1];
        }
        cout << qtd << endl;
}
    


    return 0;
}