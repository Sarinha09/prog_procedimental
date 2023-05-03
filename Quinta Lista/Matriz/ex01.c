#include <stdio.h>

#define LINHAS 4
#define COLUNAS 4

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j, contador = 0;


    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);


            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

     printf("A matriz possui %d valores maiores que 10.\n", contador);
}