#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int matriz[][10], int linhas, int colunas) {
    printf("Numeros matriz\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void multiplicarMatrizes(int matrizA[][10], int matrizB[][10], int matrizProduto[][10], int linhasA, int colunasA, int colunasB) {
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            matrizProduto[i][j] = 0;
            for (int k = 0; k < colunasA; k++) {
                matrizProduto[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

void exibirMatriz(int matriz[][10], int linhas, int colunas) {
    printf("=-=-= Matriz =-=-=\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a, b, c, d;

    printf("dimensao matriz (a, b, c, d): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (b != c) {
        printf("Erro\n");
        return 0;
    }

    int matrizA[10][10], matrizB[10][10], matrizProduto[10][10];

    printf("=-=-= Matriz A =-=-=\n");
    lerMatriz(matrizA, a, b);
    printf("\n=-=-= Matriz B =-=-=\n");
    lerMatriz(matrizB, c, d);
    multiplicarMatrizes(matrizA, matrizB, matrizProduto, a, b, d);

    exibirMatriz(matrizA, a, b);
    printf("\n");
    exibirMatriz(matrizB, c, d);
    printf("\n");
    exibirMatriz(matrizProduto, a, d);

    return 0;
}
