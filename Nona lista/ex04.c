#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* remover_vogais(const char* str) {
    int len = strlen(str);
    char* resultado = (char*)malloc((len + 1) * sizeof(char)); 
    int j = 0;
    for (int i = 0; i < len; i++) {
        char c = str[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            resultado[j] = c; 
            j++;
        }
    }
    
    resultado[j] = '\0'; 
    return resultado;
}

int main() {
    int tamanho;
    
    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);
    
    char* ponteiro_str = (char*)malloc((tamanho + 1) * sizeof(char));
    
    printf("Digite o conteudo: ");
    scanf(" %s", ponteiro_str);
    
    
    char* resultado = remover_vogais(ponteiro_str);
    
    printf("String sem vogais: %s\n", resultado);
    
    free(ponteiro_str); 
    free(resultado);
    
    return 0;
}
