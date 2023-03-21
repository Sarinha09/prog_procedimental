#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m2,h;
    printf("Digite um valor area em hectares: ");
    scanf("%f",&h);

    m2 = h*10000;

    printf("%f Hectares = %f m2",h,m2);

    return 0;
}