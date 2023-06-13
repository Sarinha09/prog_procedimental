#include <stdio.h>

void fracionaria(float num, int* inteiro, float* fracao) {
    *inteiro = (int) num;
    *fracao = num - *inteiro;
}

int main() {
    float numero;
    int parteInteira;
    float parteFracionaria;

    printf("Digite um valor: ");
    scanf("%f", &numero);

    fracionaria(numero, &parteInteira, &parteFracionaria);

    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionaria: %.2f\n", parteFracionaria);

    return 0;
}
