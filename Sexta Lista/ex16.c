#include <stdio.h>
#include <stdlib.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    char descricao[61];
    struct Data data;
};

int main() {
    struct Compromisso agenda[5];
    int i, M, A;

    for (i = 0; i < 5; i++) {
        printf("Compromisso %d:\n", i+1);
        printf("Digite a descrição (máximo 60 letras): ");
        scanf(" %s", agenda[i].descricao);

        printf("Digite a data:\n");
        printf("Dia: ");
        scanf("%d", &agenda[i].data.dia);
        printf("Mês: ");
        scanf("%d", &agenda[i].data.mes);
        printf("Ano: ");
        scanf("%d", &agenda[i].data.ano);
    }

    while (1) {
        printf("\n");
        printf("Digite o mês (0 para sair): ");
        scanf("%d", &M);
        
        if (M == 0) {
            break;
        }

        printf("Digite o ano: ");
        scanf("%d", &A);

        printf("Compromissos do mês %d do ano %d:\n", M, A);
        for (i = 0; i < 5; i++) {
            if (agenda[i].data.mes == M && agenda[i].data.ano == A) {
                printf("Descrição: %s\n", agenda[i].descricao);
                printf("Data: %d/%d/%d\n", agenda[i].data.dia, agenda[i].data.mes, agenda[i].data.ano);
            }
        }
    }

    return 0;
}
