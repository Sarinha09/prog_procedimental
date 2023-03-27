#include <stdio.h>
#include <stdlib.h>

int main()
{

    int CF, CI, CD, CC;

    printf("Digite o custo de fabrica em reais: ");
    scanf("%i", &CF);

    if(CF <= 12000){
        CI = CF * 0;
        CD = CF * 0.05;
    }
    if(CF > 12000 && CF <= 25000){
        CI = CF * 0.15;
        CD = CF * 0.10;
    }
    if(CF > 25000){
        CI = CF * 0.20;
        CD = CF * 0.15;
    }

    CC = CF + CD + CI;

    printf("\n");
    printf("O custo do consumidor serah: R$%i", CC);
    printf("\n");


 
  return 0;
}