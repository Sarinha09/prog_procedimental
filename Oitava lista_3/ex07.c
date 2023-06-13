#include <stdio.h>

void maior_ocorrencia(int array[], int tamanho, int *maior, int *ocorrencias) {
    *maior = array[0];
    *ocorrencias = 0;

    for (int i = 0; i < tamanho; i++) {
        if (array[i] > *maior) {
            *maior = array[i];
        }
    }

    for (int i = 0; i < tamanho; i++) {
        if (array[i] == *maior) {
            (*ocorrencias)++;
        }
    }
}

int main() {
    int tamanho, maior, ocorrencias;;

    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    int array[tamanho];

    printf("Digite os valores:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }

    maior_ocorrencia(array, tamanho, &maior, &ocorrencias);

    printf("Maior elemento: %d\n", maior);
    printf("Ocorrencias: %d\n", ocorrencias);

    return 0;
}
