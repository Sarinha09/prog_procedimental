#include <stdio.h>
#include <stdlib.h>

int buscaValor(int** matriz, int linhas, int colunas, int valor) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int linhas, colunas;
    printf("Digite numero de linhas e coluna matriz: ");
    scanf("%d%d", &linhas,&colunas);

    int** matriz = (int**)malloc(linhas * sizeof(int*));
    if (matriz == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memoria.\n");
            return 1;
        }
    }

    printf("\nDigite os numeros da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int valor;
    printf("\nValor a ser buscado: ");
    scanf("%d", &valor);
    int encontrado = buscaValor(matriz, linhas, colunas, valor);

    if (encontrado) {
        printf("\nValor %d encontrado\n", valor);
    } else {
        printf("\nValor %d nao encontrado\n", valor);
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
