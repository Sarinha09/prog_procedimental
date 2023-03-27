#include <stdio.h>

int main(){
    int num1, num2;

    printf("Digite primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite segundo valor: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("O numero %d eh maior.", num1);
    }

    else{
        printf("O numero %d eh maior.", num2);
    }
    return 0;
}