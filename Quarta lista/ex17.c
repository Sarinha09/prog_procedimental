#include <stdio.h>

int soma(int numero1, int numero2);

int main()
{
    int numero1, numero2, soma1;
    printf("Digite um numero1: ");
    scanf("%d", &numero1);
    printf("Digite um numero2: ");
    scanf("%d", &numero2);

    if(numero1 <= 0 || numero2 <= 0) {
        printf("Os numeros devem ser positivos.\n");
        return 1;
    }

    soma1 = soma(numero1, numero2);
    printf("Resultado: %d", soma1);
    return 0;
}

int soma(int numero1, int numero2){
        int i, soma = 0;
    if(numero1 < numero2) {
        for(i = numero1 + 1; i < numero2; i++) {
            soma += i;
        }
    } 
    else {
        for(i = numero2 + 1; i < numero1; i++) {
            soma += i;
        }
    }
    return soma;
}