#include <stdio.h>

int main() {
  int ano, ano_atual;
  float salario = 2000, aumento = 1.5;

  printf("Digite o ano atual: ");
  scanf("%d", &ano_atual);

  for (ano = 1996; ano <= ano_atual; ano++) {
    salario *= 1 + (aumento / 100);
    aumento *= 2;
  }

  printf("Salario atual: %.5f\n", salario);

}
