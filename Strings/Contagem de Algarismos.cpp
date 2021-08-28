#include<iostream>

using namespace std;

int main(){

    int n=0, cont0=0, cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0, cont7=0, cont8=0, cont9=0;
    cin >> n;

    string s[n];

    for(int i=0; i < n; i++){
        cin >> s[i];
    }

    for(int i=0; i < n; i++){
    for(int j=0; j <(int)s[i].size(); j++){

        if(s[i][j] == '0'){
            cont0++;
        }
        if(s[i][j] == '1'){
            cont1++;
        }
        if(s[i][j] == '2'){
            cont2++;
        }
        if(s[i][j] == '3'){
            cont3++;
        }
        if(s[i][j] == '4'){
            cont4++;
        }
        if(s[i][j] == '5'){
            cont5++;
        }
        if(s[i][j] == '6'){
            cont6++;
        }
        if(s[i][j] == '7'){
            cont7++;
        }
        if(s[i][j] == '8'){
            cont8++;
        }
        if(s[i][j] == '9'){
            cont9++;
        }
    }
}

    cout << '0' << ' ' << '-' << ' ' << cont0 << endl;
    cout << '1' << ' ' << '-' << ' ' << cont1 << endl;
    cout << '2' << ' ' << '-' << ' ' << cont2 << endl;
    cout << '3' << ' ' << '-' << ' ' << cont3 << endl;
    cout << '4' << ' ' << '-' << ' ' << cont4 << endl;
    cout << '5' << ' ' << '-' << ' ' << cont5 << endl;
    cout << '6' << ' ' << '-' << ' ' << cont6 << endl;
    cout << '7' << ' ' << '-' << ' ' << cont7 << endl;
    cout << '8' << ' ' << '-' << ' ' << cont8 << endl;
    cout << '9' << ' ' << '-' << ' ' << cont9 << endl;


    return 0;
}