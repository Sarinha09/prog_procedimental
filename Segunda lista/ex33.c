#include <stdio.h>

int main() {
    float preco_antigo, preco_novo;
    printf("Digite o preco antigo do produto: ");
    scanf("%f", &preco_antigo);

    if (preco_antigo <= 50){
        preco_novo = preco_antigo * 1.05;
    }
    else if (preco_antigo > 50 && preco_antigo <= 80){
        preco_novo = preco_antigo * 1.10;
    }
    else if (preco_antigo > 100){
        preco_novo = preco_antigo * 1.15;
    }
    
    printf("preco novo: R$ %.2f\n", preco_novo);

    if (preco_novo <= 80){
        printf("Barato");
    }
    else if (preco_novo > 80 && preco_novo <= 120){
        printf("Normal");
    }
    else if (preco_novo > 120 && preco_novo <= 200){
        printf("Caro");
    }
    else if (preco_novo > 200){
        printf("Muito caro");
    }


    return 0;
}


