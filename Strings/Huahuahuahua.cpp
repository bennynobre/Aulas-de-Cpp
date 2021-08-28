#include<iostream>
using namespace std;

int main(){

    int cont1=0, cont2=0;
    string aeiou;
    cin >> aeiou;

    string vogal="";

    for(int i=0; i < (int)aeiou.size(); i++){
        if(aeiou[i] == 'a' or aeiou[i] == 'e' or aeiou[i] == 'i' or aeiou[i] == 'o' or aeiou[i] == 'u'){

               vogal += aeiou[i];
            
        }
    }

    int cont=vogal.size()-1;
    for(int i=0; i < (int)vogal.size(); i++){

        if(vogal[i] != vogal[cont]){

            cout << "N";
                 break;

            }
        cont--;
    }
    
    if(cont == -1){

        cout << "S";

    }

    return 0;
}