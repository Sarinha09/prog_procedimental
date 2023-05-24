#include <stdio.h>

int main() {
    int numeros[6];
    int *ponteiro;

    printf("Digite seis números:\n");

    // Lê os números e armazena-os no vetor
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Valores do vetor:\n");

    // Imprime os valores do vetor e seus endereços de memória
    ponteiro = numeros;
    for (int i = 0; i < 6; i++) {
        printf("Valor: %d, Endereço: %p\n", *(ponteiro + i), (ponteiro + i));
    }

    return 0;
}