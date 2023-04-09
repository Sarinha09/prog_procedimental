#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n, reset = 0, impar = -1;

    printf("Digite o valor N entre 1 e 5: ");
    scanf("%i", &n);

    if(n < 0 || n > 5){
            printf("Valor invalido");
            printf("\n");
            exit (0);
        }

    while(reset < n){

        reset++;
        impar = impar + 2;
        printf("\n");
        printf("Valor impar: %i", impar);

    }

    printf("\n");
    return 0;
}