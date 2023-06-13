#include <stdio.h>

void notas(float *nota1, float *nota2) {
    do {
        printf("Nota 1: ");
        scanf("%f", nota1);
    } while (*nota1 < 0 || *nota1 > 10);

    do {
        printf("Nota 2: ");
        scanf("%f", nota2);
    } while (*nota2 < 0 || *nota2 > 10);
}

void media(float nota1, float nota2, float *media_simples, float *media_ponderada) {
    *media_simples = (nota1 + nota2) / 2;
    *media_ponderada = (nota1 + nota2 * 2) / 3;
}

int main() {
    float nota1, nota2;
    float media_simples, media_ponderada;

    notas(&nota1, &nota2);
    media(nota1, nota2, &media_simples, &media_ponderada);

    printf("Media Simples: %.2f\n", media_simples);
    printf("Media Ponderada: %.2f\n", media_ponderada);

    return 0;
}
