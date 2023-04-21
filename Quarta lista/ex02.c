#include <stdio.h>
#include <stdlib.h>

int imprimir(int dia, int mes, int ano){
    
    printf("\n");
    return printf("Sua data eh: %i/%i/%i", dia,mes,ano);
}

int main(){

    int dia, mes, ano; 

    printf("Digite o dia: ");
    scanf("%i", &dia);

    printf("Digite o mes: ");
    scanf("%i", &mes);

    printf("Digite o ano: ");
    scanf("%i", &ano);

    imprimir(dia, mes, ano);

    return 0;
}