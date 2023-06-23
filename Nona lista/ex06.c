#include <stdio.h>
#include <stdlib.h>

int* alocarMemoria(int tamanho) {
    int* memoria = (int*)calloc(tamanho, sizeof(int)); 
    return memoria;
}

void inserirValor(int* memoria, int posicao, int valor) {
    memoria[posicao] = valor;
    printf("Valor %d inserido na posicao %d\n", valor, posicao);
}

void consultarValor(const int* memoria, int posicao) {
    int valor = memoria[posicao];
    printf("Valor contido na posicao %d: %d\n", posicao, valor);
}

int main() {
    int tamanho;
    printf("Digite o tamanho da memoria em bytes: ");
    scanf("%d", &tamanho);

    int* memoria = alocarMemoria(tamanho);

    int opcao;
    do {
        printf("\nOpcoes:\n");
        printf("[1] Inserir valor em uma posicao\n");
        printf("[2] Consultar valor em uma posicao\n");
        printf("[3] Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int posicao, valor;
                printf("Digite a posicao: ");
                scanf("%d", &posicao);
                printf("Digite o valor: ");
                scanf("%d", &valor);

                inserirValor(memoria, posicao, valor);
                break;
            }
            case 2: {
                int posicao;
                printf("Digite a posicao: ");
                scanf("%d", &posicao);

                consultarValor(memoria, posicao);
                break;
            }
            case 3:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    free(memoria);

    return 0;
}
