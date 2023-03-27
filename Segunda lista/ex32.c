#include <stdio.h>

int main (){

    int codigo, quantidade;
    float preco;

    printf("(100) cachorro quente\n");
    printf("(101) bauru simples\n");
    printf("(102) bauru com ovo\n");
    printf("(103) hamburquer\n");
    printf("(104) cheeseburguer\n");
    printf("(105) suco\n");
    printf("(106) refrigerante\n");


    printf("Escolha opcao cardapio: ");
    scanf("%d", &codigo);
        
    printf("Qual quantidade?:  ");
    scanf("%d", &quantidade);

    switch(codigo) {
        case 100:
            preco = 1.20;
            break;
        case 101:
            preco = 1.30;
            break;
        case 102:
            preco = 1.50;
            break;
        case 103:
            preco = 1.20;
            break;
        case 104:
            preco = 1.70;
            break;
        case 105:
            preco = 2.20;
            break;
        case 106:
            preco = 1.00;
            break;
        default:
            printf("Código inválido!\n");
            return 0;
    }

    printf("Total: R$ %.2f\n", preco * quantidade);



    return 0;
}