#include <stdio.h>

int exclamacoes(int n);

int main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    
    exclamacoes(n);
    return 0;
}

int exclamacoes(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("!");
        }
        printf("\n");
    }
}