#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_base, salario_final;

    printf("Informe  salario base: ");
    scanf("%f",&salario_base);

    salario_final = salario_base - (salario_base*0.02);
   
    printf("Salario: %f",salario_final);

    return 0;
}