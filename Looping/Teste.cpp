#include<iostream>
#include<algorithm>

using namespace std;

int main(){

  int N;
  int C[10005];
  
  cin >> N;

  for( int i = 1; i <= N; i++ )
    cin >> C[i];

  sort(C+1, C+N+1);

  int a=0;
  C[0] = 0;
  for ( int i = 1; i <= N; i++ )
    if ( C[i] - C[i-1] > 8 ){
      
      a=1;
    
    }

  if(a == 1){
      cout << "N";
  }else{
      cout << "S";
  }

  return 0;
}