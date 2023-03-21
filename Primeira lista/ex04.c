#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, s;
    printf("Digite um valor: ");
    scanf("%d",&num);


    s = num * num;

    printf("O quadrado de %d igual a: %d",num,s);

    return 0;
}