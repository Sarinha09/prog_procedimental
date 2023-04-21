#include <stdio.h>
#include <stdlib.h>

int verificador(int numero);

int main()
{
    int numero, resultado;
    printf("Digite um valor: ");
    scanf("%d", &numero);

    resultado = verificador(numero);

    return 0;
}

int verificador(int numero){
    if (numero <0){
        printf("Numero negativo");
        return -1;
    }
    if (numero > 0){
        printf("Numero positivo");
        return 1;
    }
    if  (numero == 0){
        printf("Numero igual a Zero");
        return 0;
    }

}