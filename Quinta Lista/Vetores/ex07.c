#include <stdio.h>

int main (){

    int vetor[6], par = 0, impar = 0, soma = 0, i;

    printf("digite 6 valores: ");

    for(i = 0; i < 6; i++){
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0){
            par++;
            par += vetor[i];
        }
        else{
            impar++;
        }
    }

    printf("\nNumeros pares digitados: ");
    for(i = 0; i < 6; i++) {
        if(vetor[i] % 2 == 0) {
            printf("%d, ", vetor[i]);
        }
    }

    printf("\nSoma dos vetores pares digitados: %d", soma);

    printf("\nnumeros impares digitados: ");
    for(i = 0; i < 6; i++){
        if(vetor[i]%2 !=0){
            printf("%d, ", vetor[i]);
        }
    }
    printf("\nQuantidade de numeros impares digitados: %d\n", impar);


    return 0;

}