#include <stdio.h>

int main(){
   int horas, minutos, segundos, experiencia, h, m, s, soma;

   printf("Quantas horas?");
   scanf("%d", &horas);

   printf("Quantos minutos?");
   scanf("%d", &minutos);

   printf("Quantas segundos?");
   scanf("%d", &segundos);
   
   printf("Quanto tempo de experiencia (em segundos)?");
   scanf("%d", &experiencia);

   h = horas*3600;
   m = minutos*60;
   s = segundos*1;

   soma = h+m+s+experiencia;

   h = soma/3600;
   m = (soma%3600)/60;
   s = (soma%3600)%60;


   printf("%d: %d : %d", h,m,s);

   











   
   
   return 0;
}