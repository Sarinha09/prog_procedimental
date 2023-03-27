#include <stdio.h>

int main() {
    float num1, num2, resultado;
    float opcao;

    printf("Escolha a opcao:\n");
    printf("1- Soma de 2 numeros.\n");
    printf("2- Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3- Produto entre 2 numeros.\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("V=-=-=-= Soma =-=-=-=\n");
        printf("Digite 2 valores:\n ");
        scanf("%f", &num1);
        scanf("%f", &num2);

        resultado = num1 + num2;

        printf("Resultado: %d", resultado);
    }
    
    else if (opcao == 2){
        printf("V=-=-=-= Diferenca =-=-=-=\n");
        printf("Digite 2 valores:\n ");
        scanf("%f", &num1);
        scanf("%f", &num2);

        if(num1 > num2) {
            resultado = num1 - num2;
        } 
        else {
                resultado = num2 - num1;
        }
        printf("A diferenca entre os numeros eh: %.2f", resultado);
        printf("Resultado: %f", resultado);
    }
    
    
    else if (opcao == 3){
        printf("V=-=-=-= Produto =-=-=-=\n");
        printf("Digite 2 valores:\n ");
        scanf("%f", &num1);
        scanf("%f", &num2);

        resultado = num1 * num2;

        printf("Resultado: %f", resultado);
    }
    
    
    else if (opcao == 4){
        printf("V=-=-=-= divisao =-=-=-=\n");
        printf("Digite 2 valores:\n ");
        scanf("%f", &num1);
        scanf("%f", &num2);

         if(num2 == 0) {
                printf("Erro: nao eh possivel dividir por zero.");
        } 
        else {
            resultado = num1 / num2;
            printf("A divisao dos numeros eh: %.2f", resultado);
        }

    }
    
    else{
        printf("Valor invalido!\n");
    }

    return 0;
}