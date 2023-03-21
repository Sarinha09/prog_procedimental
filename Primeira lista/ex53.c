#include <stdio.h>

int main(){
   int c,l,p,area, valor1,valor;


   printf("Informe comprimento e altura terreno: ");
   scanf("%d %d", &c, &l);

   printf("Digite valor da tela: ");
   scanf("%d", &valor1);

   area = c*l;

   valor = area*valor1;

   printf("Valor final sera de: %d", valor);

   
   
   return 0;
}