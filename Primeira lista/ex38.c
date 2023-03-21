#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, aumento,r;
    printf("Digite valor salario: ");
    scanf("%f",&salario);

    aumento = salario*0.25;
    r = salario + aumento;
    
    printf("Novo salario: %f",r);

    return 0;
}