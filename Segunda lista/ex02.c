#include <stdio.h>
#include <math.h>

int main(){
    int valor,raiz;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if(valor > 0){
        raiz = sqrt(valor);
        printf("A raiz quadrada de %d eh %d", valor, raiz);
    }

    else{
        printf("Valor invalido");
    }
    return 0;
}