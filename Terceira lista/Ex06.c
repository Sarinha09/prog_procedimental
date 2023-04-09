#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n = 0, num = 0, numsoma, i = 0;
    float media;

    for(; n < 10; n++){

        i = i + 1;
        printf("%i - Digite o valor a ser somado : ", i);
        scanf("%i", &numsoma);

        num = num + numsoma;

        media = num/10;

    }
    printf("\n");

    printf("A media eh: %.2f", media);
    printf("\n");
    return 0;
}