#include <stdio.h>
#include <stdlib.h>

void copiarValores(int* vetorInicial, int* vetorExpandido, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetorExpandido[i] = vetorInicial[i];
    }
}

void exibirVetor(int* vetor, int tamanho) {
    printf("Vetor lido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int tamanhoInicial = 10; 
    int tamanhoAtual = tamanhoInicial;
    int* vetor = (int*)malloc(tamanhoAtual * sizeof(int)); 
    int valor;
    int posicao = 0; 

    printf("Digite os numeros ( 0 para encerrar): \n");

    while (1) {
        scanf("%d", &valor);
        if (valor == 0) {
            break; 
        }
        vetor[posicao] = valor;
        posicao++;
        if (posicao == tamanhoAtual) {
            int tamanhoExpandido = tamanhoAtual + 10;
            int* vetorExpandido = (int*)malloc(tamanhoExpandido * sizeof(int));
            copiarValores(vetor, vetorExpandido, tamanhoAtual);
            free(vetor); 
            vetor = vetorExpandido;
            tamanhoAtual = tamanhoExpandido;
        }
    }

    exibirVetor(vetor, posicao);
    free(vetor); 

    return 0;
}
