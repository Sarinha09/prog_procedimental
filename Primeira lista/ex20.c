
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kg,l;
    printf("Digite um valor massa em KG: ");
    scanf("%f",&kg);

    l = kg/0.45;

    printf("%f KG = %f Libras",kg,l);

    return 0;
}