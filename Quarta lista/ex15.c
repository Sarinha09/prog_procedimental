#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num1, num2, num3;

    printf("Digite o valor 1: ");
    scanf("%d",&num1);
    printf("Digite o valor 2: ");
    scanf("%d",&num2);
    printf("Digite o valor 3: ");
    scanf("%d",&num3);
    
    if(num1 < 0 || num2 < 0 || num3 < 0){
        printf("Valor invalido meu parceiro");
        exit(0);
    }

    void triangulovalido(int num1, int num2, int num3);
    triangulovalido(num1, num2, num3);

    
    printf("\n");
    void qualtriangulo(int num1, int num2, int num3);
    qualtriangulo(num1, num2, num3);

    return 0;
}

void triangulovalido(int num1, int num2, int num3){

    if(num1 + num2 < num3 || num1 + num3 < num2 || num2 + num3 < num1 ){
        printf("Valores invalidos para um triangulo");
        exit(0);
    }
        else{
            printf("Valores validos para um triangulo");
        }

}

void qualtriangulo(int num1, int num2, int num3){

    if (num1 == num2 && num2 == num3) {
        printf("O triangulo eh equilatero");
    }
        else
            if (num1 == num2 || num2 == num3 || num1 == num3) {
            printf("O triangulo eh isoceles");
            }      
                else 
                    printf("O triangulo eh escaleno");
}
