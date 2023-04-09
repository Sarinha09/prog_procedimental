#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int i, num;

    for(i = 0; i == 0;){
        printf("\n");
        printf("Digite o numero: ");
        scanf("%d",&num);
        printf("\n");

        if(num <= 0){
            printf("Encerrando");
            i += 1;
            break;
        }
        else{

        printf("O quadrado do numero eh: %i", num*num);
        printf("\n");
        printf("O cubo do numero eh: %i", num*num*num);
        printf("\n");
        printf("A raiz quadrada do numero eh: %.3f", sqrt(num));
        printf("\n");
        
        }

    }
    
    return 0;
}