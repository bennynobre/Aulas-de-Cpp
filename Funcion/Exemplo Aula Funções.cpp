#include<iostream>
#include<cmath>

using namespace std;

bool eh_primo(int x){

    int div=0;

    for(int i=1; i <= x; i++){
        if(x%i == 0){
            div++;
        }
    }
    if(div==2){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    int x=0;

    cin >> x;

    if(eh_primo(x)){
        cout << "S" << "\n";
    }else{
        cout << "N" << "\n";
    }

    return 0;
}