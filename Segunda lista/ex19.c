#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("O numero %d nao e divisivel nem por 3 nem por 5\n", num);
    } else if (num % 3 == 0) {
        printf("O numero %d e divisivel por 3, mas nao por 5\n", num);
    } else if (num % 5 == 0) {
        printf("O numero %d e divisivel por 5, mas nao por 3\n", num);
    } else {
        printf("O numero %d nao e divisivel nem por 3 nem por 5\n", num);
    }

    return 0;
}