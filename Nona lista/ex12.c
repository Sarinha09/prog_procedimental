#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int main() {
    int num_produtos;
    printf("Quantos produtos?: ");
    scanf("%d", &num_produtos);

    Produto* produtos = (Produto*)malloc(num_produtos * sizeof(Produto));

    if (produtos == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    for (int i = 0; i < num_produtos; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("Nome: ");
        scanf(" %s", produtos[i].nome);
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Preco de venda: ");
        scanf("%f", &produtos[i].preco);
    }

    int indice_maior_preco = 0;
    float maior_preco = produtos[0].preco;
    for (int i = 1; i < num_produtos; i++) {
        if (produtos[i].preco > maior_preco) {
            indice_maior_preco = i;
            maior_preco = produtos[i].preco;
        }
    }

    int indice_maior_quantidade = 0;
    int maior_quantidade = produtos[0].quantidade;
    for (int i = 1; i < num_produtos; i++) {
        if (produtos[i].quantidade > maior_quantidade) {
            indice_maior_quantidade = i;
            maior_quantidade = produtos[i].quantidade;
        }
    }

    printf("\n=-=-= Produto com o maior preco de venda =-=-=\n");
    printf("Codigo: %d\n", produtos[indice_maior_preco].codigo);
    printf("Nome: %s\n", produtos[indice_maior_preco].nome);
    printf("Quantidade: %d\n", produtos[indice_maior_preco].quantidade);
    printf("Preço de venda: %.2f\n", produtos[indice_maior_preco].preco);

    printf("\n=-=-= Produto com a maior quantidade disponivel no estoque =-=-=\n");
    printf("Codigo: %d\n", produtos[indice_maior_quantidade].codigo);
    printf("Nome: %s\n", produtos[indice_maior_quantidade].nome);
    printf("Quantidade: %d\n", produtos[indice_maior_quantidade].quantidade);
    printf("Preço de venda: %.2f\n", produtos[indice_maior_quantidade].preco);

    free(produtos);

    return 0;
}
