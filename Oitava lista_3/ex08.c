#include <stdio.h>

int negativos(float *vet, int N) {
    int count = 0;

    for (int i = 0; i < N; i++) {
        if (vet[i] < 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int tamanho;

    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    float array[tamanho];

    printf("Digite os valores:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &array[i]);
    }

    int quantidadeNegativos = negativos(array, tamanho);

    printf("tem %d numeros negativos\n", quantidadeNegativos);

    return 0;
}
