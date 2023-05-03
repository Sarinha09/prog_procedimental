#include <stdio.h>
#include <string.h>

int main(){

    char str[20];
    float valor, porcentagem;
    printf("Nome da mercadoria: ");
    scanf("%s", &str);

    printf("Valor da mercadoria: ");
    scanf("%f", &valor);

    porcentagem = valor - (valor*0.10);

    printf("Mercadoria: %s\n", str);
    printf("10%% desconto = %.2f\n", porcentagem);



    return 0;

    }