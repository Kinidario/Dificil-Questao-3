#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void) {
  float n, soma = 0;
  
  srand(time(NULL));
  
  while(1){
    n = (float)rand()/(float)(RAND_MAX);
    printf("%f\n", n);
    if(soma + n > 3.142857){
      for(int i=0; i<1000; i++){
        n = (float)rand()/(float)(RAND_MAX);
        if(soma + n > 3.142857)
          continue;
        else
          soma += n;
      }
      printf("%f", soma);
      break;
      }
    
    soma += n;
  }
  
  return 0;
}