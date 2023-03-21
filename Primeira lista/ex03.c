#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1, v2, v3, s;
    printf("Valor 1: ");
    scanf("%d",&v1);
    printf("Valor 2: ");
    scanf("%d",&v2);
    printf("Valor 3: ");
    scanf("%d",&v3);


    s = v1 + v2 + v3;

    printf("Resultado: %d",s);

    return 0;
}