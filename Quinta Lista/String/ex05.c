#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for(i=0; i < strlen(palavra); i++){
        if(palavra[i]>= 'A' && palavra[i]<= 'Z'){
            palavra[i] = palavra[i] + 32;
        }
    }

    printf("Em minusculo: %s", palavra);




    return 0;
}
