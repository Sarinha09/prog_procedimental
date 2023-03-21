#include <stdio.h>
int main(){
    float aposta1, aposta2, aposta3, premio, p1, p2, p3, aposta_total, recebe1, recebe2, recebe3;

    printf("Digite valor do premio: ");
    scanf("%f", &premio);

    printf("Aposta jogador 1: ");
    scanf("%f",&aposta1);

    printf("Aposta jogador 2: ");
    scanf("%f",&aposta2);

    printf("Aposta jogador 3: ");
    scanf("%f",&aposta3);


    aposta_total = aposta1 + aposta2 + aposta3;
    p1 = aposta1 / aposta_total;
    p2 = aposta2 / aposta_total;
    p3 = aposta3 / aposta_total;

    recebe1 = premio * p1;
    recebe2 = premio * p2;
    recebe3 = premio * p3;

    printf("\nO apostador 1 recebe: %f\n", recebe1);
    printf("O apostador 2 recebe: %f\n", recebe2);
    printf("O apostador 3 recebe: %f\n", recebe3);
    return 0;
}