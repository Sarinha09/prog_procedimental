#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[50], c;
    int i, vogais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    for(i = 0; i < strlen(palavra); i++){
        if(tolower(palavra[i])== 'a' || tolower(palavra[i] == 'e') || tolower(palavra[i] == 'i') || tolower(palavra[i] == 'o') || tolower(palavra[i] == 'u')){
            vogais++;
        }
    }

    printf("A palavra possui %d vogais", vogais);

    printf("\nDigite um caractere para substituir as vogais: ");
    scanf("%s", &c);

    
    for(i = 0; i < strlen(palavra); i++){
        if(tolower(palavra[i])== 'a' || tolower(palavra[i] == 'e') || tolower(palavra[i] == 'i') || tolower(palavra[i] == 'o') || tolower(palavra[i] == 'u')){
            palavra[i] = c;
        }
    }

    printf("A palavra alterada eh: %s", palavra);


    return 0;
}
