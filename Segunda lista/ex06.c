#include <stdio.h>

int main(){
    int num1, num2, dif;

    printf("Digite primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite segundo valor: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("O numero %d eh maior.", num1);
        dif = num1 - num2;
        printf("A diferenca entre eles eh de: %d", dif);
    }

    else if(num2 > num1){
        printf("O numero %d eh maior.", num2);
        dif = num2 - num1;
        printf("A diferenca entre eles eh de: %d", dif);
    }

    else{
        printf("O numero %d e %d sao iguais, nao tem difenca entre eles.", num1,num2);
    }
    return 0;
}