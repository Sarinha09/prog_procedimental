#include <stdio.h>

int main() {
    int var1, var2;
    int* endereco1;
    int* endereco2;

    printf("Digite o valor 1: ");
    scanf("%d", &var1);
    printf("Digite o valor 2: ");
    scanf("%d", &var2);

    endereco1 = &var1;
    endereco2 = &var2;

    printf("\nEndereco 1: %p\n", endereco1);
    printf("Endereco 2: %p\n", endereco2);

    if (endereco1 > endereco2) {
        printf("Maior endereco: %p\n", endereco1);
    } else if (endereco2 > endereco1) {
        printf("Maior endereco: %p\n", endereco2);
    } else {
        printf("Os enderecos são iguais.\n");
    }

    return 0;
}