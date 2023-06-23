#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int** matriz, int linhas, int colunas) {
    printf("numeros da matriz: \n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void construirTransposta(int** matriz, int** transposta, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

void mostrarMatriz(int** matriz, int linhas, int colunas) {
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N, M;
    printf("Digite numero de linhas e coluna matriz: ");
    scanf("%d%d", &N,&M);

    int** matriz = (int**)malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++) {
        matriz[i] = (int*)malloc(M * sizeof(int));
    }

    lerMatriz(matriz, N, M);

    int** transposta = (int**)malloc(M * sizeof(int*));
    for (int i = 0; i < M; i++) {
        transposta[i] = (int*)malloc(N * sizeof(int));
    }

    construirTransposta(matriz, transposta, N, M);

    mostrarMatriz(matriz, N, M);
    printf("\n");
    mostrarMatriz(transposta, M, N);

    for (int i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);
    for (int i = 0; i < M; i++) {
        free(transposta[i]);
    }
    free(transposta);
    return 0;
}
