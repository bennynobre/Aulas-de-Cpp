#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){

    double a=0, b=0, potencia=0;

    cout.precision(4);
    cout.setf(ios::fixed);

    cin >> a >> b;
    
    potencia = (double)pow(a,b);

    cout << potencia;

    return 0;
}