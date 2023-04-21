#include <stdio.h>

float hipotenusa(float a, float b);

int main()
{
    float a, b, resultado;
    printf("Digite valor de A: ");
    scanf("%f", &a);
    printf("Digite valor de A: ");
    scanf("%f", &b);

    resultado = hipotenusa(a, b);

    return 0;
}

float hipotenusa(float a, float b){

    float hipotenusa;
    hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
    printf("Hipotenusa eh: %.2f", hipotenusa);
    return hipotenusa;
}