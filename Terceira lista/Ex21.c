#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int a, b, i, j, ehPrimo, contador = 0;
	
	printf("Informe o Valor de a: ");
	scanf("%i", &a);

	printf("Informe o Valor de b: ");
	scanf("%i", &b);

	if(a > b){
		printf("Intervalo invalido");
		exit(0);
	}

	for(i = a; i <= b; i++){
		ehPrimo = 1;
		for(j = 2; j <= i/2; j++){
			if(i % j == 0){
				ehPrimo = 0;
				break;
			}
		}
		if(ehPrimo && i > 1){
			contador += 1;
		}
	}

	printf("\nExistem %d Numeros Primos no Intervalo %i e %i", contador, a, b);

	return 0;
}