#include <stdio.h>

int main(){
   int valor, horas, horas_seg = 3600, minutos, segundos;

   printf("Digite um valor em segundos: ");
   scanf("%d", &valor);

   horas = (valor/horas_seg); 
   minutos = (valor -(horas_seg*horas))/60;
   segundos = (valor -(horas_seg*horas)-(minutos*60));
   printf("%dh : %dm :%ds \n",horas,minutos,segundos);
   
   return 0;
}