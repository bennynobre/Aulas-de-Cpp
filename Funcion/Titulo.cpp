#include <iostream>

using namespace std;

string title(string F){

	for(int i=0; F[i] != '\0'; i++){
        if(F[i] > 64 and F[i] < 91){
            F[i] += 32;
        }
    }
    
	for(int i=0; F[i] != '\0'; i++){
       if(i == 0){
           F[i] -= 32;
       }
       if(F[i] == ' '){
           i++;
           F[i] -= 32;
       }
    }
    

    return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}