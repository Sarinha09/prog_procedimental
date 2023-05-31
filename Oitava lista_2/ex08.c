#include <stdio.h>

int main() {
    int A, *B, **C, ***D;

    printf("Digite um valor para A: ");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    printf("Dobro: %d\n", *B * 2);
    printf("Triplo: %d\n", **C * 3);
    printf("Quadruplo: %d\n", ***D * 4);

    return 0;
}
