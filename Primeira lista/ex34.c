#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,s,pi = 3.141592;
    printf("Digite um valor do raio de um circulo: ");
    scanf("%f",&r);

    s = pi*(r*r);
    
    printf("A area desse circulo eh %f",s);

    return 0;
}