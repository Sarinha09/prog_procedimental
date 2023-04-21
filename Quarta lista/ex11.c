#include <stdio.h>
#include <stdlib.h>

int media(int nota1, int nota2, int nota3, char l);

int main()
{
    int nota1, nota2, nota3;
    char l;
    printf("Digite letra A(media) e (ponderada): ");
    scanf("%s", &l);

    printf("Digite valor 3 notas: ");
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);

    media(nota1, nota2, nota3, l);
    return 0;
}

int media(int nota1, int nota2, int nota3, char l){
    int calculo;
    if (l == 'A' || l == 'a'){
        calculo = (nota1 + nota2 + nota3)/3;
        printf("Resultado: %d", calculo);
        return 0;
    }
    if (l == 'P' || l == 'p'){
        calculo = (nota1*5) + (nota2*3) + (nota3*2)/3; 
        printf("Resultado: %d", calculo);
        return 1;
    }
    return 0;

}