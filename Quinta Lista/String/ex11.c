#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, j;

    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0'; // Removendo o \n da string

    printf("Digite o valor de i: ");
    scanf("%d", &i);

    printf("Digite o valor de j: ");
    scanf("%d", &j);

    if (i >= 0 && j >= 0 && i <= strlen(string) && j <= strlen(string) && i <= j) {
        printf("Segmento S[%d..%d]: ", i, j);
        for (int k = i; k <= j; k++) {
            printf("%c", string[k]);
        }
        printf("\n");
    } else {
        printf("Valores de i e j inválidos.\n");
    }

    return 0;
}
