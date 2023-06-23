#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Digite valor de N: ");
    scanf("%d", &N);

    int* vetor = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    int X;
    printf("Digite o valor de X: ");
    scanf("%d", &X);
    
    int contador = 0;
    
    printf("Multiplos de X no vetor: ");
    for (int i = 0; i < N; i++) {
        if (vetor[i] % X == 0) {
            printf("%d ", vetor[i]);
            contador++;
        }
    }
    printf("\nTem %d multiplos de X: %d\n", contador);
    
    free(vetor);
    
    return 0;
}
