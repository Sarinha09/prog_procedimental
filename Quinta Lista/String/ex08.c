#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    char l1, l2;

    printf("Digite uma string: ");
    fgets(string, 100, stdin);

    printf("Digite a letra L1 que deseja substituir: ");
    scanf("%c", &l1);

    printf("Digite a letra L2 que deseja colocar no lugar de L1: ");
    scanf(" %c", &l2);

    int tam = strlen(string);

    for (int i = 0; i < tam; i++) {
        if (string[i] == l1) {
            string[i] = l2;
        }
    }

    printf("Nova string: %s\n", string);

    return 0;
}