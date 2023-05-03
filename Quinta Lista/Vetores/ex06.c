#include <stdio.h>

int primo(int n);
int main (){

    int vetor[10], i;

    printf("digite 10 valores: ");

    for(i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

  for(i = 0; i < 10; i++) {
        if(primo(vetor[i])) {
            printf("%d na posicao %d\n", vetor[i], i);
        }
    }


    return 0;



}

int primo(int n){
    int i;
    if(n <=1){
        return 0;
    }
    for(i = 2; i<= n/2; i++){
        if(n%i == 0 ){
            return 0;
        }
    }
    return 1;
}