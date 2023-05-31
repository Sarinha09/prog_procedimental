#include <stdio.h>

int main() {
    float array[10] = {1.1, 2.7, 3.2, 4.5, 5.1, 6.9, 7.3, 8.7, 9.4, 12.5};
    float *ptr = array; // Ponteiro para o início do array

    for (int i = 0; i < 10; i++) {
        printf("Endereco do elemento %d: %p\n", i, ptr);
        ptr++; 
    }

    return 0;
}