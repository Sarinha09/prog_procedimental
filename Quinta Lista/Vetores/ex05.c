#include <stdio.h>

int main (){

    int vetor[50];

    for(int i = 0; i < 50; i++){
        vetor[i] = (i+5*i)%(i+1);
    }


    for(int i = 0; i < 50; i++) {
        printf("%d\n", vetor[i]);

    }

    return 0;

}