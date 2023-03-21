#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,k;
    printf("Digite temperatura em C: ");
    scanf("%f",&c);


    k = c + 273.15;

    printf("%fC =  %f K",c,k);

    return 0;
}