#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cm,p;
    printf("Digite um valor de comprimeto em polegadas: ");
    scanf("%f",&p);

    cm = p*2.54;

    printf("%f polegadas = %f cm",p,cm);

    return 0;
}