#include <stdio.h>
#include <math.h>


struct NumeroComplexo {
    double real;
    double imaginario;
};


struct NumeroComplexo somarComplexos(struct NumeroComplexo z, struct NumeroComplexo w) {
    struct NumeroComplexo resultado;
    resultado.real = z.real + w.real;
    resultado.imaginario = z.imaginario + w.imaginario;
    return resultado;
}


struct NumeroComplexo subtrairComplexos(struct NumeroComplexo z, struct NumeroComplexo w) {
    struct NumeroComplexo resultado;
    resultado.real = z.real - w.real;
    resultado.imaginario = z.imaginario - w.imaginario;
    return resultado;
}

struct NumeroComplexo multiplicarComplexos(struct NumeroComplexo z, struct NumeroComplexo w) {
    struct NumeroComplexo resultado;
    resultado.real = z.real * w.real - z.imaginario * w.imaginario;
    resultado.imaginario = z.real * w.imaginario + z.imaginario * w.real;
    return resultado;
}


double calcularModulo(struct NumeroComplexo z) {
    return sqrt(z.real * z.real + z.imaginario * z.imaginario);
}

int main() {
    struct NumeroComplexo z, w;

    printf("Digite o primeiro numero complexo:\n");
    printf("Parte real: ");
    scanf("%lf", &z.real);
    printf("Parte imaginaria: ");
    scanf("%lf", &z.imaginario);

    printf("\nDigite o segundo numero complexo:\n");
    printf("Parte real: ");
    scanf("%lf", &w.real);
    printf("Parte imaginaria: ");
    scanf("%lf", &w.imaginario);

 
    struct NumeroComplexo soma = somarComplexos(z, w);
    struct NumeroComplexo subtracao = subtrairComplexos(z, w);
    struct NumeroComplexo produto = multiplicarComplexos(z, w);
    double moduloZ = calcularModulo(z);
    double moduloW = calcularModulo(w);

    printf("\nResultados:\n");
    printf("Soma: %.2lf + %.2lfi\n", soma.real, soma.imaginario);
    printf("Subtracao: %.2lf + %.2lfi\n", subtracao.real, subtracao.imaginario);
    printf("Produto: %.2lf + %.2lfi\n", produto.real, produto.imaginario);
    printf("Modulo de z: %.2lf\n", moduloZ);
    printf("Modulo de w: %.2lf\n", moduloW);

    return 0;
}
