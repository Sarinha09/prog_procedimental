#include <stdio.h>

int main() {
    int array[5];
    int i;

    printf("Digite 5 inteiros:\n");


    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enderecos das posicoes com valores pares:\n");

    
    for (i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            printf("%p\n", &array[i]);
        }
    }

    return 0;
}
