#include <stdio.h>

void dobrar(int *ptr) {
    *ptr = 2 * (*ptr);
}

int main() {
    int A, B;
    int *ptrA, *ptrB;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    ptrA = &A;
    ptrB = &B;

    dobrar(ptrA);
    dobrar(ptrB);

    int resultado = *ptrA + *ptrB;
    printf("A soma do dobro de A e B é: %d\n", resultado);

    return 0;
}
