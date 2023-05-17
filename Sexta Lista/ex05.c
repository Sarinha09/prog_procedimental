#include <stdio.h>

struct vetor {
    float a;
    float b;
    float c;
};

struct vetor soma_vetores(struct vetor vetor1, struct vetor vetor2) {
    struct vetor resultado;
    resultado.a = vetor1.a + vetor2.a;
    resultado.b = vetor1.b + vetor2.b;
    resultado.c = vetor1.c + vetor2.c;
    return resultado;
}

int main() {
    struct vetor vetor1, vetor2, soma;

    printf("Digite as coordenadas do primeiro vetor:\n");
    printf("a: ");
    scanf("%f", &vetor1.a);
    printf("b: ");
    scanf("%f", &vetor1.b);
    printf("c: ");
    scanf("%f", &vetor1.c);

    printf("Digite as coordenadas do segundo vetor:\n");
    printf("a: ");
    scanf("%f", &vetor2.a);
    printf("b: ");
    scanf("%f", &vetor2.b);
    printf("c: ");
    scanf("%f", &vetor2.c);

    soma = soma_vetores(vetor1, vetor2);

    printf("A soma dos vetores resulta no vetor:\n");
    printf("a: %.2f\n", soma.a);
    printf("b: %.2f\n", soma.b);
    printf("c: %.2f\n", soma.c);

    return 0;
}
