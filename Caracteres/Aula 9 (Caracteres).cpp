#include<iostream>

using namespace std;

int main(){

    char op;
    double x=0, y=0, res=0;

    cin >> op;
    cin >> x >> y;

    if(op == 'D'){
        res = x/y;
    }else {
        res = x*y;
    }

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << res << endl;

    return 0;
}