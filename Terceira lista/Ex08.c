#include<stdio.h>
int main()
{
 int numero, maior, menor;
 int i;

 printf("Digite um valor: ");
 scanf("%i", &numero);

 maior=numero;
 menor=numero;

 for(i=1; i<10; i++)
 {
 printf("Digite um valor: ");
 scanf("%i", &numero);

 if(numero>maior)
 maior=numero;
 else
 if(numero<menor)
 menor=numero;
 }


 printf("Menor numero eh: %d",menor);
 printf("\nMaior numero eh: %d",maior);

 return 0;
}