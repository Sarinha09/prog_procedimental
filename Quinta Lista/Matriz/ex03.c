#include <stdio.h>

#define DIMENSAO 5

int main() {
    int matriz[DIMENSAO][DIMENSAO];
    int i, j;


    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz resultante:\n");
    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}