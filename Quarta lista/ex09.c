#include <stdio.h>
#include <stdlib.h>

int volume(int altura, int raio);

int main()
{
    int raio, altura;
    printf("Digite valor altura: ");
    scanf("%d", &altura);

    printf("Digite valor do raio: ");
    scanf("%d", &raio);
    volume(raio, altura);

    return 0;
}

int volume(int raio, int altura){
    int calculo;

    calculo = 3.141592*(raio*raio)*altura;
    printf("Resultado: %d", calculo);
    return calculo;
}

