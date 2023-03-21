#include <stdio.h>
#include <stdlib.h>

int main()
{
    float real,cota,dolar;
    printf("Digite valor em Real: ");
    scanf("%f",&real);
    printf("Digite a cotacao do dolar: ");
    scanf("%f",&cota);

    dolar = real * cota;

    printf("%f dolares",dolar);

    return 0;
}