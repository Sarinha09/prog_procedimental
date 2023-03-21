#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v,s1,s2;
    printf("Digite um valor: ");
    scanf("%d",&v);
    
    s1 = v - 1;
    s2 = v + 1;

    printf("antecedor: %d  Sucessor: %d", s1,s2);

    return 0;
}