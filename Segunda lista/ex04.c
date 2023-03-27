#include <stdio.h>
#include <math.h>

int main(){
    int valor,quadrado;
    float raiz;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if(valor > 0){
        raiz = sqrt(valor);
        printf("A raiz de %d eh %.2f \n", valor, raiz);

        quadrado = (valor)*(valor);
        printf("O numero %d elevado ao quadrado eh %d", valor, quadrado);
    }

    else {
        printf ("Valor invalido");
    }
    return 0;
}