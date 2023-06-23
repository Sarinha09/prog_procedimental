#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    int *vetor;
    int pares = 0, impares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int*) malloc(tamanho * sizeof(int));

    printf("Digite os valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            pares++;
        } 
        else {
            impares++;
        }
    }

    printf("Numeros pares: %d\n", pares);
    printf("Numeros impar: %d\n", impares);

    free(vetor);

    return 0;
}
