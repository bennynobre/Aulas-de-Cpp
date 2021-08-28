#include<iostream>
using namespace std;

int main(){

    string s;
    cin >> s;

    for(int i=0; i < s.size(); i++){
        if(s[i] == 'A' or s[i] == 'B' or s[i] == 'C'){
            cout << "2";
        }else if(s[i] == 'D' or s[i] == 'E' or s[i] == 'F'){
            cout << "3";
        }else if(s[i] == 'G' or s[i] == 'H' or s[i] == 'I'){
            cout << "4";
        }else if(s[i] == 'J' or s[i] == 'K' or s[i] == 'L'){
            cout << "5";
        }else if(s[i] == 'M' or s[i] == 'N' or s[i] == 'O'){
            cout << "6";
        }else if(s[i] == 'P' or s[i] == 'Q' or s[i] == 'R' or s[i] == 'S'){
            cout << "7";
        }else if(s[i] == 'T' or s[i] == 'U' or s[i] == 'V'){
            cout << "8";
        }else if(s[i] == 'W' or s[i] == 'Z' or s[i] == 'Y' or s[i] == 'Z'){
            cout << "9";
        }else{
            cout << s[i];
        }
    }


    return 0;
}