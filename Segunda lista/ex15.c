#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero entre 1 e 7: ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Numero invalido!\n");
            break;
    }

    return 0;
}