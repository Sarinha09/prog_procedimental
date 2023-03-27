#include <stdio.h>

int main(){
    float num1, num2, media;

    printf("Digite primeira nota: ");
    scanf("%f", &num1);

    printf("Digite segundo nota: ");
    scanf("%f", &num2);
    
    if((num1>=0 && num1<=10) && (num2>=0 && num2<=10)){
        media = (num1 + num2)/2;
        printf("Nota 1: %.2f \nNota 2: %.2f \n88Media: %.2f", num1,num2,media);
    }

    else{
        printf("Valor invalido");
    }

    return 0;
}