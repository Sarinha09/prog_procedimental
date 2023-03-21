#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, r;
    printf("Digite um valor: ");
    scanf("%f",&num);


    r = num * 1/5;

    printf("A quinta parte de %f eh: %f",num,r);

    return 0;
}