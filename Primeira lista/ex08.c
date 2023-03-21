#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,k;
    printf("Digite temperatura em K: ");
    scanf("%f",&k);


    c = k-273.15;

    printf("%fK =  %f C",k,c);

    return 0;
}