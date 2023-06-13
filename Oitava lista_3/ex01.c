#include <stdio.h>

void trocarValores(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Valor de A e B: ");
    scanf("%d%d", &a,&b);

    printf("\nValores antes de trocar:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    trocarValores(&a, &b);

    printf("\nValores depois de trocar:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}
