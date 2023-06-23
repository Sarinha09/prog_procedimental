#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros = (int*) malloc(5 * sizeof(int)); 

    printf("Digite 5 numeros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]); 
    }

    printf("Numeros: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]); 
    }
    printf("\n");

    free(numeros); 
    return 0;
}
