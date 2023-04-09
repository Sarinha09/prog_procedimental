#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int n, i, j, k = 0;
	
	printf("Informe o numero de linhas: ");
	scanf("%i", &n);

    for(i = 1; n >= i; i++){
        for(j = 1; j <= i; j++){
            k++;
            printf("%i ", k);
        }
            printf("\n");
    }

	return 0;
}