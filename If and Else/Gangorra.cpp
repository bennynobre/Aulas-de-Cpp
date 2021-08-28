#include<iostream>

using namespace std;

int main(){

    int p1=0, p2=0, c1=0, c2=0;

    cin >> p1 >> c1 >> p2 >> c2;


    if((p1*c1) == (p2*c2)){

        cout << "0";

    }else{

        if((p1*c1) > (p2*c2)){

            cout << "-1";

        }if((p1*c1) < (p2*c2)){

            cout << "1";
        }
    }

    return 0;
}