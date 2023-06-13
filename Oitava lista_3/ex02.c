#include <stdio.h>

void encontrarMaiorMenor(int a, int b, int *maior, int *menor) {
    if (a > b) {
        *maior = a;
        *menor = b;
    } 
    else {
        *maior = b;
        *menor = a;
    }
}

int main() {
    int valor1, valor2, maior, menor;

    printf("Digite 2 valores: ");
    scanf("%d%d", &valor1,&valor2);

    encontrarMaiorMenor(valor1, valor2, &maior, &menor);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
