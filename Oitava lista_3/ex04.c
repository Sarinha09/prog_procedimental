#include <stdio.h>

int ordenarValores(int* a, int* b, int* c) {
    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    else if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    else if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    else if (*a == *b && *b == *c) {
        return 1;
    } 
    else {
        return 0;
    }
}

int main() {
    int a, b, c;

    printf("Digite valor de A, B e C: ");
    scanf("%d%d%d", &a,&b,&c);

    printf("\nValores antes de ordenar:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);

    int saoIguais = ordenarValores(&a, &b, &c);

    printf("\nResultado:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);

    if (saoIguais) {
        printf("\nValores iguais\n");
    } 
    else {
        printf("\nValores diferentes\n");
    }

    return 0;
}
