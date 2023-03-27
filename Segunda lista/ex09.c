#include <stdio.h>

int main() {

   float salario, prestacao;

   printf("Insira valor do salario: ");
   scanf("%f", &salario);

   printf("Insira o valor da prestacao: ");
   scanf("%f", &prestacao);

   if (prestacao > (salario * 0.2)) {
       printf("Emprestimo nao concedido\n");
   } 

   else {
       printf("Emprestimo concedido\n");
   }

   return 0;
}