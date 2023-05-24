#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int* ponteiroInteiro = &inteiro;
    float* ponteiroReal = &real;
    char* ponteiroChar = &caractere;

    printf("Valores originais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    // Modificando os valores usando ponteiros
    *ponteiroInteiro = 50;
    *ponteiroReal = 1.30;
    *ponteiroChar = 'C';

    printf("\nValores modificados:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}