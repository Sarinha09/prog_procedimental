#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{

    int A, B, C, Acertos = 0;

    srand(time(NULL));

    A = rand() % 100;
    B = rand() % 100;
  
    printf("Valor de A eh: %i ", A);
    printf("\n");
    printf("Valor de A eh: %i ", B);
    printf("\n");
    printf("Qual o valor de A + B? ");
    scanf("%i", &C);
    printf("\n");

    if(C == A + B){
        printf("Parabens voce acertou!");
        Acertos = Acertos + 1;
    }
    else 
        printf("Voce errou");

    A = rand() % 100;
    B = rand() % 100;

    printf("\n");
    printf("Valor de A eh: %i ", A);
    printf("\n");
    printf("Valor de A eh: %i ", B);
    printf("\n");
    printf("Qual o valor de A + B? ");
    scanf("%i", &C);
    printf("\n");

    if(C == A + B){
        printf("Parabens voce acertou!");
        Acertos = Acertos + 1;
    }
    else 
        printf("Voce errou");

    A = rand() % 100;
    B = rand() % 100;

    printf("\n");
    printf("Valor de A eh: %i ", A);
    printf("\n");
    printf("Valor de A eh: %i ", B);
    printf("\n");
    printf("Qual o valor de A + B? ");
    scanf("%i", &C);
    printf("\n");

    if(C == A + B){
        printf("Parabens voce acertou!");
        Acertos = Acertos + 1;
    }
    else 
        printf("Voce errou");

    A = rand() % 100;
    B = rand() % 100;

    printf("\n");
    printf("Valor de A eh: %i ", A);
    printf("\n");
    printf("Valor de A eh: %i ", B);
    printf("\n");
    printf("Qual o valor de A + B? ");
    scanf("%i", &C);
    printf("\n");

    if(C == A + B){
        printf("Parabens voce acertou!");
        Acertos = Acertos + 1;
    }
    else 
        printf("Voce errou");

    A = rand() % 100;
    B = rand() % 100;

    printf("\n");
    printf("Valor de A eh: %i ", A);
    printf("\n");
    printf("Valor de A eh: %i ", B);
    printf("\n");
    printf("Qual o valor de A + B? ");
    scanf("%i", &C);
    printf("\n");

    if(C == A + B){
        printf("Parabens voce acertou!");
        Acertos = Acertos + 1;
    }
    else 
        printf("Voce errou");

    printf("\n");
    printf("\n");
    printf("Voce acertou %i questoe(s)", Acertos);

  return 0;
}
