#include <stdio.h>

int main() {
    int num, digito, calc = 0;

    printf("Informa um valor: ");
    scanf("%d", &num);
    
    if (num > 0) {
        while (num > 0) {
        digito = num % 10;
        calc += digito;
        num /= 10;
        }  
        printf("Resultado: %d", calc);
    }
    
    else {
        printf("invalido\n");
    }
    
    return 0;
}



