#include <stdio.h>
#include <stdlib.h>

int dobrar(int numero);

int main()
{
    int numero, resultado;
    printf("Digite um valor: ");
    scanf("%d", &numero);
    resultado = dobrar(numero);

    printf("Resultado: %d", resultado);
    return 0;
}

int dobrar(int numero){
    int resultado = numero * 2;
    return resultado;
}