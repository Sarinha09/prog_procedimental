#include <stdio.h>
#include <stdlib.h>

int quadrado(int numero);

int main()
{
    int numero, resultado;
    printf("Digite um valor: ");
    scanf("%d", &numero);

    resultado = quadrado(numero);

    return 0;
}

int quadrado( int numero){
    int i;
    for (i = 1; i * i <= numero; i++) {
        if (numero % i == 0 && numero / i == i) {
            printf("eh quadrado perfeito");
            return 1; 
        }
    }
    return 0;

}
