#include <stdio.h>
#include <math.h>

void esfera(float R, float *area, float *volume) {

    *area = 4 * 3.14159 * pow(R, 2);
    *volume = (4.0 / 3.0) * 3.14159 * pow(R, 3);
}

int main() {
    float raio, area, volume;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    esfera(raio, &area, &volume);

    printf("Area superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}
