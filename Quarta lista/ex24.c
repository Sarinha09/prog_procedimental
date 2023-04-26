#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void asteristicos(int n);

int main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    
    asteristicos(n);
    return 0;
}

void asteristicos(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for(j = n - i; j >= 1; j--)
            printf(" "); 
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (j = 2; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
