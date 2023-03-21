#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kg,l;
    printf("Digite um valor massa em Libras: ");
    scanf("%f",&l);

    kg = l*0.45;

    printf("%f Libras = %f KG",l,kg);

    return 0;
}