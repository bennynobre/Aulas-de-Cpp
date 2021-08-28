#include<iostream>
#include<cmath>

using namespace std;

double media(double x, double y, double z){

    double media = (x+y+z)/3.0;
    return media;
}

int main(){

    cout << media(2,4,6) << endl;
    return 0;
}