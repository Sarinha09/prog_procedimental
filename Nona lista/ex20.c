#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    char nome[50];
    int x;
    int y;
} Cidade;
double calcularDistancia(Cidade cidade1, Cidade cidade2) {
    int dx = cidade2.x - cidade1.x;
    int dy = cidade2.y - cidade1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    int N;
    printf("Numero de cidades: ");
    scanf("%d", &N);

    Cidade* cidades = (Cidade*)malloc(N * sizeof(Cidade));


    for (int i = 0; i < N; i++) {
        printf("Cidade %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", cidades[i].nome);
        printf("Coordenada X: ");
        scanf("%d", &cidades[i].x);
        printf("Coordenada Y: ");
        scanf("%d", &cidades[i].y);
        printf("\n");
    }

    double** matrizDistancias = (double**)malloc(N * sizeof(double*));
    for (int i = 0; i < N; i++) {
        matrizDistancias[i] = (double*)malloc(N * sizeof(double));
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrizDistancias[i][j] = calcularDistancia(cidades[i], cidades[j]);
        }
    }

    printf("Matriz de Distancias:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%.2f\t", matrizDistancias[i][j]);
        }
        printf("\n");
    }

    int cidade1, cidade2;
    printf("Digite o numero das duas cidades (1 a %d): ", N);
    scanf("%d %d", &cidade1, &cidade2);

    if (cidade1 <= N && cidade2 <= N) {
        double distancia = matrizDistancias[cidade1 - 1][cidade2 - 1];
        printf("distancia das cidades %d e %d eh  de %.2f.\n", cidade1, cidade2, distancia);
    } else {
        printf("Cidades invalidas.\n");
    }
    free(cidades);
    for (int i = 0; i < N; i++) {
        free(matrizDistancias[i]);
    }
    free(matrizDistancias);

    return 0;
}
