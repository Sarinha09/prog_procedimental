#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os valores dos lados do triângulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("O triangulo eh equilatero.\n");
        } else if (a == b || b == c || c == a) {
            printf("O triângulo eh isosceles.\n");
        } else {
            printf("O triangulo eh escaleno.\n");
        }
    } else {
        printf("Esses valores nao podem ser os lados de um triangulo.\n");
    }

    return 0;
}