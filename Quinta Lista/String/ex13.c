#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[100];
    int i, j, tamanho, palindromo = 1;

    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';

    tamanho = strlen(string);

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        while (!isalpha(string[i]) && i < j) { 
            i++;
        }
        while (!isalpha(string[j]) && i < j) { 
            j--;
        }
        if (tolower(string[i]) != tolower(string[j])) { 
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("A string é um palindromo.\n");
    } else {
        printf("A string não é um palindromo.\n");
    }

    return 0;
}
