#include<iostream>

using namespace std;

int main(){

    int p=0, r=0;
    cin >> p >> r;

    if(p == 0){
        cout << "C";
    }else if(p == 1 and r == 0){
        cout << "B";
    }else{
        cout << "A";
    }

    return 0;
}