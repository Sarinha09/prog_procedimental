#include <stdio.h>

int main (){

    int vetor[8], x, y, soma;

    printf("digite 8 valores: ");
    for(int i = 0; i < 8; i++){
        scanf("%d", &vetor[i]);
    }


    printf("Digite valor de y e x (0 a 7)");
    scanf("%d %d", &x, &y);

    soma = vetor[x] + vetor[y];

    printf("Valor x + y = %d", soma);



    return 0;

}