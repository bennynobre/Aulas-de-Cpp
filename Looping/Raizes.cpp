#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int n=0;
    double x=0;

    cout.precision(4);
    cout.setf(ios::fixed);

    cin >> n;
    for(int i=0; i < n; i++){
        cin >> x;

        cout << sqrt(x) << endl;
    }

    return 0;
}