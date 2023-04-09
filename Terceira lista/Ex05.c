#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n = 0, num = 0, numsoma, i = 0;

    for(; n < 10; n++){

        i = i + 1;
        printf("%i - Digite o valor a ser somado : ", i);
        scanf("%i", &numsoma);

        num = num + numsoma;

    }
    printf("\n");

    printf("O valor final da soma eh: %i", num);
    printf("\n");
    return 0;
}