#include <stdio.h>
#include <math.h>

int main() {

  double x, y, distancia;

  printf("Informe o valor de x: ");
  scanf("%lf", &x);

  printf("Informe o valor de y: ");
  scanf("%lf", &y);

  distancia = sqrt(pow(x, 2) + pow(y, 2));

  printf("A distância eh: %.2f\n", x, y, distancia);

  return 0;

}