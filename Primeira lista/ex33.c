#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,s;
    printf("Digite um valor do lado de um quadrado: ");
    scanf("%d",&l);

    s = l*l;
    
    printf("A area desse quadrado eh %d",s);

    return 0;
}