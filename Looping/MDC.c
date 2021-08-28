#include <stdio.h>

int main() 
{
  int n=3;         
  int i=1;         
  int mdc;      
  int numero;    
  int novo_mdc; 
  int divisor;  

  scanf ("%d", &mdc);
  
  while (i < n) 
    {
      scanf ("%d", &numero);
      i = i + 1;

      divisor = 1;
      while (divisor <= mdc && divisor <= numero) 
        {
          if (mdc % divisor == 0 && numero % divisor == 0) 
	    {
              novo_mdc = divisor;                
            }
          divisor = divisor + 1;
        }

     
      mdc = novo_mdc;
    }

  printf("MDC = %d\n", mdc);
  return 0;
} 