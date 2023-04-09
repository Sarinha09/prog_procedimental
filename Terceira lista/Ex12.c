#include "stdio.h"

int main(){
  int numero, soma = 1;
  printf("Informe um numero inteiro: ");
  scanf("%d",&numero);
  

  for (int i=2 ; i <= (numero/2.0+1) ; i++ ) {
        
    if ( numero % i == 0 ) {
      printf("%d - ",i);
      soma += i;
    }
  }
  printf("A soma dos divisores de %d e %d",numero,soma);
  return 0;
}