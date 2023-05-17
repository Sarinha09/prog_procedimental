#include <stdio.h>
#include <math.h>

struct PontoCartesiano {
    float x;
    float y;
};

struct PontoPolar {
    float raio;
    float argumento;
};

struct PontoCartesiano converterParaCartesiano(struct PontoPolar polar) {
    struct PontoCartesiano cartesiano;
    cartesiano.x = polar.raio * cos(polar.argumento);
    cartesiano.y = polar.raio * sin(polar.argumento);
    return cartesiano;
}

int main() {
    struct PontoPolar polar;
    struct PontoCartesiano cartesiano;

    printf("Informe as coordenadas polares:\n");
    printf("Raio: ");
    scanf("%f", &polar.raio);
    printf("Argumento (em radianos): ");
    scanf("%f", &polar.argumento);

    cartesiano = converterParaCartesiano(polar);

    printf("\nCoordenadas cartesianas:\n");
    printf("x = %.2f\n", cartesiano.x);
    printf("y = %.2f\n", cartesiano.y);

    return 0;
}
