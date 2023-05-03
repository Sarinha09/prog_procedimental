#include <stdio.h>

int main(){

    int matriz[5][5], i,j,x, aux = 1;

    printf("Digite matriz 5x5: ");

    for(i=0; i < 5; i++){
        for(j=0; j <5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite valor busca: ");
    scanf("%d", &x);

    for (i = 0; i < 5; i++) {
       for(j = 0; j < 5; j++){
        if(matriz[i][j] == x){
            printf("\nvalor encontrado na linha %d, na coluna %d.", i+1, j+1);
        }
        aux = 0;

       }

    }
      
    if(aux){
        printf("nao encontrado");
        return 0; 
        }
    
    }