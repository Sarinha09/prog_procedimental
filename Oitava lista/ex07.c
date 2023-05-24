#include <stdio.h>

int main() {
    int num1, num2, num3;
    int *ptr1, *ptr2, *ptr3;

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    printf("Os números digitados foram: %d, %d e %d\n", *ptr1, *ptr2, *ptr3);

    // Ordenação dos números em ordem crescente usando if-else
    if (*ptr1 > *ptr2) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }

    if (*ptr2 > *ptr3) {
        int temp = *ptr2;
        *ptr2 = *ptr3;
        *ptr3 = temp;
    }

    if (*ptr1 > *ptr2) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }

    printf("Os números em ordem crescente são: %d, %d e %d\n", *ptr1, *ptr2, *ptr3);

    printf("Endereço de memória dos números:\n");
    printf("Número 1: %p\n", (void *)&num1);
    printf("Número 2: %p\n", (void *)&num2);
    printf("Número 3: %p\n", (void *)&num3);

    return 0;
}
