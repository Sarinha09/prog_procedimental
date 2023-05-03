#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 5
#define COLUNAS 5

int main() {
    int cartela[LINHAS][COLUNAS] = {0};
    int numeros[100] = {0};
    int i, j, num;


    srand(time(NULL));


    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {

            do {
                num = rand() % 100;
            } while (numeros[num] == 1);

            cartela[i][j] = num;
            numeros[num] = 1;
        }
    }


    printf("Cartela de Bingo:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%2d ", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}
