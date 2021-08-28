#include<iostream>

using namespace std;

int main(){

    int a=0, m=0;

    cin >> a >> m;

    if(a+m <= 50){
        cout << "S";
    }else{
        cout << "N";
    }

    return 0;
}