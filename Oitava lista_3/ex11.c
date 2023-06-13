#include <stdio.h>

int encontrar_maior(int array[], int tamanho) {
    int maior = array[0];

    for (int i = 1; i < tamanho; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
    }

    return maior;
}

void imprimir_array(int array[], int tamanho, int k) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);

        if ((i + 1) % k == 0) {
            printf("\n");
        }
    }

    if (tamanho % k != 0) {
        printf("\n");
    }
}

int main() {
    int N, k, maior;

    printf("Valor de N: ");
    scanf("%d", &N);

    int array[N];

    printf("Digite os valores:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    maior = encontrar_maior(array, N);

    printf("Array com %d elementos por linha:\n", k);
    imprimir_array(array, N, k);

    printf("Maior elemento: %d\n", maior);

    return 0;
}
