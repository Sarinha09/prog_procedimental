#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cm,p;
    printf("Digite um valor de comprimeto em cm: ");
    scanf("%f",&cm);

    p = cm/2.54;

    printf("%f cm = %f polegadas",cm,p);

    return 0;
}