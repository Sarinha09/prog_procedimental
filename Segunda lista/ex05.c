#include<stdio.h>

int main(){
   int valor;

   printf("Digite um valor: ");
   scanf("%d", &valor);

   if(valor % 2 == 0){
       printf("O numero %d eh par!",valor);
   }

   else{
       printf("O numero %d eh impar!",valor);
   }
    return 0;

}