#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int** matriz, int linhas, int colunas) {
    printf("Numeros da matriz: \n");

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void localizarMaioresNumeros(int** matriz, int linhas, int colunas) {
    int maioresNumeros[3] = { 0 }; 
    int linhasMaioresNumeros[3] = { 0 }; 
    int colunasMaioresNumeros[3] = { 0 }; 

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            for (int k = 0; k < 3; k++) {
                if (matriz[i][j] > maioresNumeros[k]) {
                    for (int l = 2; l > k; l--) {
                        maioresNumeros[l] = maioresNumeros[l - 1];
                        linhasMaioresNumeros[l] = linhasMaioresNumeros[l - 1];
                        colunasMaioresNumeros[l] = colunasMaioresNumeros[l - 1];
                    }
                    maioresNumeros[k] = matriz[i][j];
                    linhasMaioresNumeros[k] = i;
                    colunasMaioresNumeros[k] = j;
                    break; 
                }
            }
        }
    }

    printf("\nOs tres maiores numeros da matriz:\n");
    for (int i = 0; i < 3; i++) {
        printf("Numero: %d\tLinha: %d\tColuna: %d\n", maioresNumeros[i], linhasMaioresNumeros[i], colunasMaioresNumeros[i]);
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
    localizarMaioresNumeros(matriz, N, M);
    for (int i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}
