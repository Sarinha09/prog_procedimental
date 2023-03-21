#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v,s1,s2,s3;
    printf("Digite um valor: ");
    scanf("%d",&v);
    
    s1 = v*2-1;
    s2 = v*3+1;
    s3 = s1+s2;

    printf("Resultado: %d", s3);

    return 0;
}