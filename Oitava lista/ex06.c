#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Os números digitados foram: %d e %d\n", *ptr1, *ptr2);

    int soma = *ptr1 + *ptr2;
    printf("A soma dos números é: %d\n", soma);

    int subtracao = *ptr1 - *ptr2;
    printf("A subtração dos números é: %d\n", subtracao);

    int multiplicacao = *ptr1 * *ptr2;
    printf("A multiplicação dos números é: %d\n", multiplicacao);

    int divisao = *ptr1 / *ptr2;
    printf("A divisão dos números é: %d\n", divisao);

    return 0;
}
