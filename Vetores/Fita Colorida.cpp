#include <bits/stdc++.h>

using namespace std;

int N, v[10100], cont=0;

int main(){

cin>>N;

for(int i=0; i<N; i++){
    cin>>v[i];
}

for(int i=0; i<N; i++){
    cont=1;

    if(v[i]==-1){
        for(int j=i;true ;j++){

            if(v[j-cont-cont+1]==0 and j-cont-cont+1>=0){
                v[i]=cont;
                break;
            }

            if(v[j+1]==0 and j+1<N){
                v[i]=cont;
                break;
            }

            cont++;
        }
    }

    if(v[i]>9) v[i]=9;
    cout<<v[i]<<" ";
}

}