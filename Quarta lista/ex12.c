#include <stdio.h>

int soma(int numero);

int main()
{
    int numero, soma1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    soma1 = soma(numero);
    printf("Resultado: %d", soma1);
    return 0;
}

int soma(int numero){
    if (numero <= 0) {
        printf("Numero inválido\n");
        return 0;
    } else {
        int soma = 0;
        while (numero > 0) {
            soma += numero % 10;
            numero /= 10;
        }
        return soma;
    }


}
