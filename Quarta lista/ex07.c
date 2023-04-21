#include <stdio.h>
#include <stdlib.h>

int conversor(float temperatura);

int main()
{
    float temperatura, resultado;
    printf("Digite temperatura em celcius: ");
    scanf("%f", &temperatura);

    resultado = conversor(temperatura);

    return 0;
}

int conversor(float temperatura){
    float calculo;

    calculo = temperatura *(9.0/5.0) + 32;
    printf("Resultado: %.2f", calculo);
    return calculo;


}