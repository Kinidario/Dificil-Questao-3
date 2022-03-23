//Bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void) {
//variáveis
  float n, soma = 0;
  
  srand(time(NULL));

//Estrutura de repetição
  while(1){
//Gerando os números aleatórios entre 0 e 1
    n = (float)rand()/(float)(RAND_MAX);
    printf("%f\n", n);
//Se a variável soma for maior que pi, o código entrará em um loop
//de valor arbritário até achar um número em que a soma não passará de pi
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
