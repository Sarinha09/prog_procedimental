#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int a;

    printf("Informe o Valor de a: ");
	scanf("%i", &a);

    void primo(int a);
    primo(a);

    return 0;
}

void primo(int a){

    int i, j, ehPrimo, contador = 0;

	for(i = 0; i <= a; i++){
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

	printf("\nExistem %d Numeros Primos no Intervalo de 0 ate %i", contador, a);

	
}
