#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamanho;
    printf("Quantos valores serem amarzenado (minimo 10)?: ");
    scanf("%d", &tamanho);

    if (tamanho < 10) {
        printf("Tamanho invalido, minimo 10.\n");
        return 0;
    }

    double* vetor = (double*)malloc(tamanho * sizeof(double));

    srand(time(NULL)); 
    for (int i = 0; i < 10; i++) {
        vetor[i] = (double)(rand() % 101);
    }
    printf("\nValores amarzenados:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2lf ", vetor[i]);
    }
    printf("\n");

    free(vetor); 

    return 0;
}
