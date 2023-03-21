#include <stdio.h>
#include <stdlib.h>

int main()
{
    float angulo,radiano, r = 3.141592;
    printf("Digite valor de um angulo em radianos: ");
    scanf("%f",&radiano);

    angulo = radiano*180/r;

    printf("%f radiano = %f graus",radiano,angulo);

    return 0;
}