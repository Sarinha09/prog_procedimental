#include <stdio.h>
#include <stdlib.h>

int volume(int raio);

int main()
{
    int raio, resultado;
    printf("Digite um valor do raio: ");
    scanf("%d", &raio);

    resultado = volume(raio);

    return 0;
}

int volume(int raio){
    int calculo;

    calculo = 4*3.14*raio*raio*raio/3;
    printf("Resultado: %d", calculo);
    return calculo;


}