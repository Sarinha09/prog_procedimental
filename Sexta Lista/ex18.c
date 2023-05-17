#include <stdio.h>
#include <stdlib.h>

struct Aeroporto{
    int codigo;
    int voos_saida;
    int voos_chegada;
};

struct Voo{
    int origem;
    int destino;
};

int main() {
    const int V = 5; 
    const int A = 5; 

    struct Voo voos[V];
    struct Aeroporto aeroportos[A];
    int i, origem, destino;


    printf("Informe os voos:\n");
    for (i = 0; i < V; i++) {
        printf("Voo %d:\n", i + 1);
        printf("Código de origem (0-%d): ", A - 1);
        scanf("%d", &origem);
        while (origem < 0 || origem >= A) {
            printf("Código de origem inválido. Digite novamente: ");
            scanf("%d", &origem);
        }
        printf("Código de destino (0-%d): ", A - 1);
        scanf("%d", &destino);
        while (destino < 0 || destino >= A) {
            printf("Código de destino inválido. Digite novamente: ");
            scanf("%d", &destino);
        }
        voos[i].origem = origem;
        voos[i].destino = destino;
        printf("\n");
    }


    for (i = 0; i < A; i++) {
        aeroportos[i].codigo = i;
        aeroportos[i].voos_saida = 0;
        aeroportos[i].voos_chegada = 0;
    }


    for (i = 0; i < V; i++) {
        aeroportos[voos[i].origem].voos_saida++;
        aeroportos[voos[i].destino].voos_chegada++;
    }


    printf("Situação dos aeroportos:\n");
    for (i = 0; i < A; i++) {
        printf("Aeroporto %d:\n", aeroportos[i].codigo);
        printf("Quantidade de voos de saída: %d\n", aeroportos[i].voos_saida);
        printf("Quantidade de voos de chegada: %d\n", aeroportos[i].voos_chegada);
        printf("\n");
    }

    return 0;
}
