#include <stdio.h>

float calcular(float numero1, float numero2, char op );

int main()
{
    float numero1, numero2, resultado;
    char op;
    printf("Digite 2 numeros: ");
    scanf("%f", &numero1);
    scanf("%f", &numero2);

    printf("Digite a opcao:\n(+) soma\n(-) subtracao\n(/) divisao\n(*) multiplicacao\n");
    scanf("%s", &op);


    resultado = calcular(numero1, numero2, op);
    printf("Resultado: %2.f", resultado);
    return 0;
}

float calcular(float numero1, float numero2, char op ){
     float resultado;
    switch (op) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            resultado = numero1 / numero2;
            break;
        default:
            printf("Operacao invalida\n");
            resultado = 0;
    }
    return resultado;
}
