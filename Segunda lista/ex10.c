#include <stdio.h>

int main() {

   float altura, cal;
   char sexo;

   printf("Inseira sua altura: ");
   scanf("%f", &altura);

   printf("Insira sexo (M ou F): ");
   scanf("%s", &sexo);

    if (sexo == 'm') {
        cal = (72.7 * altura) - 58.0;
        printf("Seu peso ideial eh: %.2f\n", cal);
   } 

   else if (sexo == 'f') {
        cal =  (62.1 * altura) - 44.7;
        printf("Seu peso ideial eh: %.2f\n", cal);
   }

   else{
    printf("Valor invalido\n");
   }


   return 0;
}