#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,a,v,pi = 3.141592;
    printf("Digite altura de um cilindro: ");
    scanf("%f",&a);
    printf("Digite raio de um circulo: ");
    scanf("%f",&r);

    v = pi*(r*r)*a;
    
    printf("Volume desse cilindro eh %f",v);

    return 0;
}