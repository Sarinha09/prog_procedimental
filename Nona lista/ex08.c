#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho = 1500;
    int* vetor = (int*)calloc(tamanho, sizeof(int));

    int countZeros = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == 0) {
            countZeros++;
        }
    }

    printf("O vetor tem %d valores inicializados com zero\n", countZeros);

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i;
    }

    printf("\nOs 10 primeiros numeros do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nOs 10 ultimos numeros do vetor:\n");
    for (int i = tamanho - 10; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor); 

    return 0;
}
