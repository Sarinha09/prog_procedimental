#include <stdio.h>

int main (){

    int vetor[5], maior = 0, menor = 0;

    printf("digite 5 valores: ");

    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }


    for(int i = 1; i < 5; i++) {
        if(vetor[i] > vetor[maior]) {
            maior = i;
        }
        if(vetor[i] < vetor[menor]) {
            menor = i;
        }
    }

    printf("Posicao do maior valor: %d\n", maior);
    printf("Posicao do menor valor: %d\n", menor);

    return 0;

}