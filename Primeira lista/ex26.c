#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m2,h;
    printf("Digite um valor area em m2: ");
    scanf("%f",&m2);

    h = m2*0.0001;

    printf("%f M2 = %f Hectares",m2,h);

    return 0;
}