#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMES 5
#define TAMANHO_NOME 31

void exibirMatriz(char matriz[MAX_NOMES][TAMANHO_NOME]) {
    printf("Matriz de nomes:\n");
    for (int i = 0; i < MAX_NOMES; i++) {
        printf("Linha %d: %s\n", i + 1, matriz[i]);
    }
    printf("\n");
}

int main() {
    char matriz[MAX_NOMES][TAMANHO_NOME];
    char nome[TAMANHO_NOME];
    int opcao;
    int linha;

    for (int i = 0; i < MAX_NOMES; i++) {
        strcpy(matriz[i], "");
    }

    while (1) {
        printf("Escolha uma opcao:\n");
        printf("[1] Gravar um nome em uma linha da matriz\n");
        printf("[2] Apagar o nome contido em uma linha da matriz\n");
        printf("[3] Procurar um nome e substituir por outro nome\n");
        printf("[4] Procurar um nome e apagar\n");
        printf("[5] Recuperar o nome contido em uma linha da matriz\n");
        printf("[0] Sair\n");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break; 
        }

        switch (opcao) {
            case 1:
                printf("Nome: ");
                scanf("%s", nome);
                printf("Numero da linha (1 a %d): ", MAX_NOMES);
                scanf("%d", &linha);
                linha--; 
                strcpy(matriz[linha], nome);
                printf("Nome gravado com sucesso.\n");
                break;

            case 2:
                printf("Numero da linha (1 a %d): ", MAX_NOMES);
                scanf("%d", &linha);
                linha--; 
                strcpy(matriz[linha], "");
                printf("Nome apagado com sucesso.\n");
                break;

            case 3:
                printf("Nome a ser procurado: ");
                scanf("%s", nome);
                printf("Digite o novo nome: ");
                scanf("%s", matriz[linha]);
                for (linha = 0; linha < MAX_NOMES; linha++) {
                    if (strcmp(matriz[linha], nome) == 0) {
                        printf("Digite o novo nome: ");
                        scanf("%s", matriz[linha]);
                        printf("Nome substituido com sucesso.\n");
                        break;
                    }
                }
                if (linha == MAX_NOMES) {
                    printf("Nome nn encontrado.\n");
                }
                break;

            case 4:
                printf("Nome a ser procurado: ");
                scanf("%s", nome);
                for (linha = 0; linha < MAX_NOMES; linha++) {
                    if (strcmp(matriz[linha], nome) == 0) {
                        strcpy(matriz[linha], "");
                        printf("Nome apagado com sucesso.\n");
                        break;
                    }
                }
                if (linha == MAX_NOMES) {
                    printf("Nome nn encontrado.\n");
                }
                break;

            case 5:
                printf("Digite o numero da linha (1 a %d): ", MAX_NOMES);
                scanf("%d", &linha);
                linha--; 
                if (strcmp(matriz[linha], "") != 0) {
                    printf("Nome na linha %d: %s\n", linha + 1, matriz[linha]);
                } else {
                    printf("Nenhum nome armazenado na linha %d.\n", linha + 1);
                }
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

        exibirMatriz(matriz);
    }

    return 0;
}
