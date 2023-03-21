#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,n4,s;
    printf("Nota 1: ");
    scanf("%d",&n1);
    printf("Nota 2: ");
    scanf("%d",&n2);
    printf("Nota 3: ");
    scanf("%d",&n3);
    printf("Nota 4: ");
    scanf("%d",&n4);

    s = (n1+n2+n3+n4)/4;

    printf("Media: %d",s);

    return 0;
}