#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, quantDiv = 0;
    float somaPrim = 2;

    for (i = 3; i <= 2000000; i += 2) {
        quantDiv = 2;
        for (j = 3; j <= (int)sqrt(i); j += 2) {
            if (i % j == 0) {
                quantDiv += 2;
                break;
            }
        }
        if (quantDiv == 2) {
            somaPrim += i;
        }
    }
    printf("A soma dos numeros primos abaixo de 2 milhoes eh: %.0f\n\n", somaPrim);
    return 0;
}