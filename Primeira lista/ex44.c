#include <stdio.h>
#include <stdlib.h>

int main()
{
    int altura, altura2, degraus;

    printf("Informe altura dos degraus: ");
    scanf("%d",&altura);

    printf("Informe altura que deseja alcançar: ");
    scanf("%d",&altura2);

    degraus = altura2/altura;
   
    printf("são necessario subir %d degraus",degraus);

    return 0;
}