#include <stdio.h>
#include <string.h>

#define TAMANHO_MATRIZ 5

int main() {
    char carros[TAMANHO_MATRIZ][20];
    float consumo[TAMANHO_MATRIZ];


    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        printf("Digite o modelo do carro %d: ", i+1);
        fgets(carros[i], 20, stdin);
        carros[i][strcspn(carros[i], "\n")] = '\0'; 

        printf("Digite o consumo do carro %d (km/l): ", i+1);
        scanf("%f", &consumo[i]);
        getchar(); 
    }


    float menor_consumo = consumo[0];
    int indice_menor_consumo = 0;

    for (int i = 1; i < TAMANHO_MATRIZ; i++) {
        if (consumo[i] < menor_consumo) {
            menor_consumo = consumo[i];
            indice_menor_consumo = i;
        }
    }

    printf("O modelo mais econômico é o %s, com um consumo de %.2f km/l\n", carros[indice_menor_consumo], menor_consumo);


    printf("\nConsumo para percorrer 1000 km:\n");

    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        float litros = 1000 / consumo[i];
        printf("%s: %.2f litros\n", carros[i], litros);
    }

    return 0;
}
