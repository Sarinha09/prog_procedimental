#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m2,a;
    printf("Digite um valor comprimento em acres: ");
    scanf("%f",&a);

    m2 = a*4048.58;

    printf("%f acres = %f m2",a,m2);

    return 0;
}