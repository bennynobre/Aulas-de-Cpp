#include<iostream>
using namespace std;

int main(){

    int n=0, x=0, y=0, res=0;
    char op;

    cin >> n;
    cin >> x >> op >> y;

    if(op == '+'){
        res = x+y;
    } else {
        res = x*y;
    }

    if(res <= n){
        cout << "OK";
    } else {
        cout << "OVERFLOW";
    }

    return 0;
}