#include <stdio.h>

int desenha_linha(int num_simbolos);
int main() {
    int num_simbolos;
    printf("Quantos simbolos de igual deseja mostrar? ");
    scanf("%d", &num_simbolos);
    desenha_linha(num_simbolos);
    return 0;
}

int desenha_linha(int num_simbolos) {
    int i;
    for(i = 0; i < num_simbolos; i++) {
        printf("=");
    }
    printf("\n");
}