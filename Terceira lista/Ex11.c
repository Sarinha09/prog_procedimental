#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n, reset = -1, natural = -1;

    printf("Digite o valor N entre 0 e 10: ");
    scanf("%i", &n);

     if(n < 0 || n > 10){
            printf("Valor invalido");
            printf("\n");
            exit (0);
        }

    while(reset < n){

        reset++;
        natural += 1;
        printf("\n");
        printf("Valor natural: %i", natural);

    }
    

    printf("\n");
    return 0;
}