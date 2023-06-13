#include <stdio.h>

void calcularSoma(int* a, int b) {
    *a = *a + b;
}

int main() {
    int a, b;

    printf("Digite valor de A e B: ");
    scanf("%d%d", &a,&b);

    printf("\nValores antes de somar:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    calcularSoma(&a, b);

    printf("\nValores depois de somar:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}
