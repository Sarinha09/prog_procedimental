#include <stdio.h>

int main() {
  int opcao;
  float num1, num2, resultado;

  do {
    printf("Escolha uma opcao:\n");
    printf("(1) Adicao\n");
    printf("(2) Subtracao\n");
    printf("(3) Multiplicacao\n");
    printf("(4) Divisao\n");
    printf("(5) Sair\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("=-=-= Adicao =-=-=\n");
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
    } 
        else if (opcao == 2) {
        printf("=-=-= Subtracao =-=-=\n");
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
    } 

    else if (opcao == 3) {

        printf("=-=-= Multiplicacao =-=-=\n");
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
    } 

    else if (opcao == 4) {
        printf("=-=-= Divisao =-=-=\n");
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        if (num2 == 0) {
            printf("Nao eh possivel dividir por zero\n");} 
        else {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);}
    } 

    else if (opcao == 5) {
        printf("Encerrando o programa...\n");} 
    else {
        printf("Opção invalida\n");}
    } while (opcao != 5);

    return 0;
}