#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    int tam = strlen(frase);
    char nova_frase[tam];
    int j = 0;

    for (int i = 0; i < tam; i++) {
        if (frase[i] != ' ') {
            nova_frase[j] = frase[i];
            j++;
        }
    }

    nova_frase[j] = '\0';
    printf("Frase sem espacos em branco: %s\n", nova_frase);

    return 0;
}