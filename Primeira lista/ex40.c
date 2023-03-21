#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, desconto;
    int d;
    printf("Digite numero de dias: ");
    scanf("%d",&d);

    salario = 30*d;
    desconto = salario*0.92;
   
    printf("Salario: %f",desconto);

    return 0;
}