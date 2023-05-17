#include <stdio.h>
#include <stdlib.h>

struct Eletrodomestico {
    char nome[16];
    float potencia;
    float tempo_ativo;
};

int main() {
    struct Eletrodomestico eletrodomesticos[5];
    int i;
    float consumo_total = 0.0;

    for (i = 0; i < 5; i++) {
        printf("Eletrodomestico %d:\n", i + 1);
        printf("Nome: ");
        scanf("%15s", eletrodomesticos[i].nome);
        printf("Potencia (kW): ");
        scanf("%f", &eletrodomesticos[i].potencia);
        printf("Tempo ativo por dia (horas): ");
        scanf("%f", &eletrodomesticos[i].tempo_ativo);
        printf("\n");
    }

    float tempo_dias;
    printf("Digite o tempo em dias: ");
    scanf("%f", &tempo_dias);

    for (i = 0; i < 5; i++) {
        consumo_total += (eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo * tempo_dias);
    }

    printf("\nConsumo total: %.2f kW\n", consumo_total);

    printf("\nConsumo relativo por eletrodomestico:\n");
    for (i = 0; i < 5; i++) {
        float consumo_relativo = (eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo * tempo_dias) / consumo_total * 100;
        printf("%s: %.2f%%\n", eletrodomesticos[i].nome, consumo_relativo);
    }

    return 0;
}
