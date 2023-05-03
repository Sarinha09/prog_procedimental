#include <stdio.h>

#define TAM 10 

int main() {
    int vetor[TAM], i, j, num;
    
    for(i = 0; i < TAM; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        for(j = 0; j < i; j++) {
            if(num == vetor[j]) {
                printf("numero repetido. Digite outro numero.\n");
                i--; 
                break;
            }
        }
        

        vetor[i] = num;
    }

    printf("\nVetor final: ");
    for(i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}