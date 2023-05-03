#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS] = 
    {
        1,0,0,0,0,
        0,1,0,0,0,
        0,0,1,0,0,
        0,0,0,1,0,
        0,0,0,0,1,
    };
    int i, j;


    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;

}