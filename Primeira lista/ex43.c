#include <stdio.h>
#include <stdlib.h>

int main() {

    
    float valor, desc10, div3, comissao, comissao2;

    printf("Informa valor do prudoto: ");
    scanf("%f", &valor);

    desc10 = valor - (valor*0.10);
    div3 = valor/3;
    comissao = desc10*0.05;
    comissao2 = valor*0.05;

    printf("Desconto 10: R$%.2f\n", desc10);
    printf("Dividido 3x: R$%.2f\n", div3);
    printf("Comissao a vista: R$%.2f\n", comissao);
    printf("Comissao parcelada: R$%.2f\n", comissao2);

    return(0);

}