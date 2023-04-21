#include <stdio.h>

int fatorial(int n);

int main() {
    int n, fatorial1;
    printf("Digite um numero: ");
    scanf("%d", &n);

    fatorial1 = fatorial(n);
    printf("%d! = %d\n", n, fatorial1);
    return 0;
}

int fatorial(int n) {
    int i, resultado = 1;
    for(i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}