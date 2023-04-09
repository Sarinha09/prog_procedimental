#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n = 0, num = 0, numleia, i = 0, divisao = 10;

    for(; n < 10; n++){

        i = i + 1;
        printf("%i - Digite o inteiro positivo : ", i);
        scanf("%i", &numleia);

        if(numleia < 0){
            printf("numero desconsiderado\n");
            divisao--;
            numleia = 0;
        }

        num = num + numleia;

    }

    float numfinal;

    numfinal = num/divisao;

    printf("\n");
    printf("O valor final da media eh: %.2f", numfinal);
    printf("\n");
    return 0;
}