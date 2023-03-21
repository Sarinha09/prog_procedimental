#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, salario, acrecimo, salario_final;
    int horas;
    printf("Informe o valor da hora trabalha: ");
    scanf("%f",&valor);

    printf("Informe quantas horas foram trabalhadas: ");
    scanf("%d",&horas);

    salario = valor*horas;
    acrecimo = salario*0.10;

    salario_final = salario + acrecimo;
   
    printf("Salario: %f",salario_final);

    return 0;
}