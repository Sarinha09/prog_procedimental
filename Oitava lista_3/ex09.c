#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr = array;

    printf("Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Array modificado:\n");
    for (int i = 0; i < 5; i++) {
        (*ptr)++;  
        printf("%d ", array[i]);
        ptr++;
    }
    printf("\n");

    return 0;
}
