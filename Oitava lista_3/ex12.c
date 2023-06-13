#include <stdio.h>

void min_max(int V[], int tamanho, int *min, int *max) {
    *min = V[0];
    *max = V[0];

    for (int i = 1; i < tamanho; i++) {
        if (V[i] < *min) {
            *min = V[i];
        }

        if (V[i] > *max) {
            *max = V[i];
        }
    }
}

int main() {
    int array[] = {10, 5, 8, 3, 12, 7};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int minimo, maximo;

    min_max(array, tamanho, &minimo, &maximo);

    printf("Array: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Minimo: %d\n", minimo);
    printf("Maximo: %d\n", maximo);

    return 0;
}
