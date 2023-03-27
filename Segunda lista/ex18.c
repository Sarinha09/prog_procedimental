#include <stdio.h>

int main() {
    int num1, num2, resultado, opcao;

    printf("Escolha uma opcao:\n ");
    printf("(1) soma\n ");
    printf("(2) Subtracao\n ");
    printf("(3) Multiplicacao\n ");
    printf("(4) Divisao\n ");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("V=-=-=-= Soma =-=-=-=\n");
        printf("Digite 2 valores:\n ");
        scanf("%d", &num1);
        scanf("%d", &num2);

        resultado = num1 + num2;

        printf("Resultado: %d", resultado);
    }
    
    else if (opcao == 2){
        printf("V=-=-=-= Subtracao =-=-=-=\n");
        printf("Digite 2 valores:\n ");
        scanf("%d", &num1);
        scanf("%d", &num2);

        resultado = num1 - num2;

        printf("Resultado: %d", resultado);
    }
    
    
    else if (opcao == 3){
        printf("V=-=-=-= multiplicaca =-=-=-=\n");
        printf("Digite 2 valores:\n ");
        scanf("%d", &num1);
        scanf("%d", &num2);

        resultado = num1 * num2;

        printf("Resultado: %d", resultado);
    }
    
    
    else if (opcao == 4){
        printf("V=-=-=-= divisao =-=-=-=\n");
        printf("Digite 2 valores:\n ");
        scanf("%d", &num1);
        scanf("%d", &num2);

        resultado = num1 / num2;

        printf("Resultado: %d", resultado);

    }
    
    else{
        printf("Valor invalido!\n");
    }

    return 0;
}