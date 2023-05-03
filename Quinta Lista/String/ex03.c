#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("A palvra ao contrario eh: ");

    for(int i = strlen(palavra) - 1; i >=0; i--){
        printf("%c", palavra[i]);
    }
    

    return 0;
}
