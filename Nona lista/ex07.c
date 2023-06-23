#include <stdio.h>
#include <stdlib.h>

int main() {
    int numerosLoteria[6];
    int numerosBilhete[6];
    
    printf("Digite 6 numeros da loteria:\n");
    for (int i = 0; i < 6; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &numerosLoteria[i]);
    }
    
    printf("\nDigite numeros do seu bilhete:\n");
    for (int i = 0; i < 6; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &numerosBilhete[i]);
    }
    
    int acertos = 0;
    int* numerosCorretos = NULL;
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (numerosBilhete[i] == numerosLoteria[j]) {
                acertos++;
                numerosCorretos = (int*)realloc(numerosCorretos, acertos * sizeof(int));
                numerosCorretos[acertos - 1] = numerosBilhete[i];
                break;
            }
        }
    }
    
    printf("\nNumeros sorteados: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numerosLoteria[i]);
    }
    
    printf("\nNumeros corretos: ");
    for (int i = 0; i < acertos; i++) {
        printf("%d ", numerosCorretos[i]);
    }
    
    free(numerosCorretos); 
    
    return 0;
}
