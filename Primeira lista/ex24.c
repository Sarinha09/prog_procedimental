#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m2,a;
    printf("Digite um valor area em m2: ");
    scanf("%f",&m2);

    a = m2*0.000247;

    printf("%f M2 = %f Acres",m2,a);

    return 0;
}