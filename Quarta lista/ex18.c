#include <stdio.h>

int soma(int x, int z);

int main()
{
    int x, z, resultado;
    printf("Digite um numero1: ");
    scanf("%d", &x);
    printf("Digite um numero2: ");
    scanf("%d", &z);

    resultado = soma(x, z);
    printf("Resultado: %d", resultado);
    return 0;
}

int soma(int x, int z){
    int i, resultado = 1;
    for(i = 0; i < z; i++) {
        resultado *= x;
    }
    return resultado;
}
