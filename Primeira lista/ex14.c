#include <stdio.h>
#include <stdlib.h>

int main()
{
    float angulo,radiano, r = 3.141592;
    printf("Digite valor de um angulo em graus: ");
    scanf("%f",&angulo);

    radiano = angulo*r/180;

    printf("%f graus = %f radiano",angulo,radiano);

    return 0;
}