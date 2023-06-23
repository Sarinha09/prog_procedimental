#include <stdio.h>
#include <stdlib.h>

int main() {
    int* numeros = NULL; 
    int tamanho = 0; 
    int numero;

    while (1) {
        printf("Digite um numero (negativo para parar): ");
        scanf("%d", &numero);

        if (numero < 0) {
            break; 
        }

        tamanho++;
        numeros = (int*)realloc(numeros, tamanho * sizeof(int));
        numeros[tamanho - 1] = numero;
    }

    printf("\nVetor lido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    free(numeros); 

    return 0;
}
