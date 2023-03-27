#include <stdio.h>

int main() {
    float valorProduto, valorFinal;
    int estadoDestino;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Digite o estado de destino (1 - MG, 2 - SP, 3 - RJ, 4 - MS): ");
    scanf("%d", &estadoDestino);

    switch (estadoDestino) {
        case 1:
            valorFinal = valorProduto * 1.07;
            printf("Preco final com imposto: %.2f", valorFinal);
            break;
        case 2:
            valorFinal = valorProduto * 1.12;
            printf("Preco final com imposto: %.2f", valorFinal);
            break;
        case 3:
            valorFinal = valorProduto * 1.15;
            printf("Preco final com imposto: %.2f", valorFinal);
            break;
        case 4:
            valorFinal = valorProduto * 1.08;
            printf("Preco final com imposto: %.2f", valorFinal);
            break;
        default:
            printf("Estado de destino invalido!");
            break;
    }

    return 0;
}