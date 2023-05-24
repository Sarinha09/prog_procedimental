#include <stdio.h>

int main() {
    int var1, var2;
    int* endereco1;
    int* endereco2;

    // Lê os valores das variáveis do teclado
    printf("Digite o valor 1: ");
    scanf("%d", &var1);

    printf("Digite o valor 2: ");
    scanf("%d", &var2);

    // Obtém os endereços das variáveis
    endereco1 = &var1;
    endereco2 = &var2;

    // Compara os endereços e exibe o conteúdo do maior endereço
    if (endereco1 > endereco2) {
        printf("conteudo maior endereco: %d\n", *endereco1);
    } else {
        printf("conteudo maior endereco: %d\n", *endereco2);
    }

    return 0;
}
