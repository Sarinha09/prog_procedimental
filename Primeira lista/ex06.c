#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;
    printf("Digite temperatura em C: ");
    scanf("%f",&c);


    f = (c * (9.0/5.0)) + 32.0;

    printf("%fC =  %f F",c,f);

    return 0;
}