#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto, desconto,r;
    printf("Digite valor do produto: ");
    scanf("%f",&produto);

    desconto = produto*0.12;
    r = produto - desconto;
    
    printf("Valor da compra: %f",r);

    return 0;
}