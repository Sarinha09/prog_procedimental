#include <stdio.h>
#include <math.h>

int main() {

  int num, log;


   printf("Inseira um numero: ");
   scanf("%d", &num);

   if (num > 0 ){

    log = log10(num);
    printf("Logartimo desse numero eh: %d",log);

   }
   


   else{
    printf("Numero invalido\n");
   }


   return 0;
}