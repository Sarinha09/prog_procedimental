#include <stdio.h>

int main() {
    float venda, comissao;

    printf("Digite o valor da venda: ");
    scanf("%f", &venda);

    if (venda >= 100000) {
        comissao = 700 + 0.16 * venda;
    } 
    else if (venda >= 80000 && venda < 100000 ) {
        comissao = 650 + 0.14 * venda;
    } 
    else if (venda >= 60000 && venda < 80000) {
        comissao = 600 + 0.14 * venda;
    } 
    else if (venda >= 40000 && venda < 60000) {
        comissao = 550 + 0.14 * venda;
    } 
    else if (venda >= 20000 && venda < 40000) {
        comissao = 500 + 0.14 * venda;
    } 
    else if (venda < 20000){
        comissao = 400 + 0.14 * venda;
    }

    printf("Comissao da venda de R$ %.2f eh R$ %.2f", venda, comissao);

    return 0;

}


