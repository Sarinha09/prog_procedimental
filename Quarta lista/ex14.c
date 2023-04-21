#include <stdio.h>

float consumo(float distancia, float litros);

int main()
{
    float distancia, litros;
    printf("Digite distancia: ");
    scanf("%f", &distancia);
     printf("Digite litros: ");
    scanf("%f", &litros);

    consumo(distancia, litros);

}

float consumo(float distancia, float litros){
      float consumo = distancia / litros;
    printf("Consumo: %.2f km/l\n", consumo);
    if (consumo < 8) {
        printf("Venda o carro!\n");
    } 
    else if (consumo >= 8 && consumo <= 14) {
        printf("Economico!\n");
    } 
    else {
        printf("Super economico!\n");
    }

}