#include <stdio.h>

int main(){

	int soma = 0;
	int contador;

	for(contador = 1; contador < 1000; contador ++){
		if(contador % 3 == 0 && contador % 5 == 0){
			soma += contador;
		}
	}

	printf("A soma dos Numeros Naturais abaixo de 1000\n que sao multiplos de 3 ou 5 e: %d ", soma);

	return 0;
}