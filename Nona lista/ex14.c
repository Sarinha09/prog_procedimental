#include <stdio.h>
#include <stdlib.h>

float** criarMatriz(int linhas, int colunas) {
    float** matriz = (float**)malloc(linhas * sizeof(float*));

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (float*)malloc(colunas * sizeof(float));
    }

    return matriz;
}

void lerMatriz(float** matriz, int linhas, int colunas) {
    printf("Numeros da matriz:\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(float** matriz, int linhas, int colunas) {
    printf("Matriz:\n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void liberarMatriz(float** matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }

    free(matriz);
}

int main() {
    int linhas, colunas;
    printf("Digite numero de linhas e coluna matriz: ");
    scanf("%d%d", &linhas,&colunas);

    float** matriz = criarMatriz(linhas, colunas);
    lerMatriz(matriz, linhas, colunas);
    imprimirMatriz(matriz, linhas, colunas);
    liberarMatriz(matriz, linhas);

    return 0;
}
