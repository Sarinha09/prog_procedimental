#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DESLOCAMENTO 3 

int main() {
    char string[100];
    int i, tamanho;

    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0'; 

    tamanho = strlen(string);

    for (i = 0; i < tamanho; i++) {
        if (isalpha(string[i])) { 
            if (islower(string[i])) { 
                string[i] = ((string[i] - 'a') + DESLOCAMENTO) % 26 + 'a'; 
            } else {
                string[i] = ((string[i] - 'A') + DESLOCAMENTO) % 26 + 'A'; 
            }
        }
    }

    printf("String cifrada: %s\n", string);

    return 0;
}
