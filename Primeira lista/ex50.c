#include <stdio.h>

int main(){
   int idade, ano_nasc, ano_atual;

   printf("Ano atual: ");
   scanf("%d", &ano_atual);

   printf("Sua idade: ");
   scanf("%d", &idade);

   ano_nasc = ano_atual - idade;

   printf("Você nasceu em: %d", ano_nasc);

   
   
   return 0;
}