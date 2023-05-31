#include <stdio.h>

void encontrarMinMax(int *array, int tamanho, int *min, int *max) {
    int i;
    *min = *max = array[0];  

    for (i = 1; i < tamanho; i++) {
        if (array[i] < *min) {
            *min = array[i]; 
        }
        if (array[i] > *max) {
            *max = array[i];  
        }
    }
}

int main() {
    int array[10];
    int i;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    int min, max;
    encontrarMinMax(array, sizeof(array) / sizeof(int), &min, &max);

    printf("Menor elemento: %d\n", min);
    printf("Maior elemento: %d\n", max);

    return 0;
}
