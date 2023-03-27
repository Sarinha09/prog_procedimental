#include <stdio.h>

int main() {
    int dia, mes, ano, bissexto;

    printf("Digite uma data (DD/MM/AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);


    if ((mes < 1 || mes > 12) || (dia < 1 || dia > 31)) {
        printf("Data invalida! %d/%d/%d",dia, mes,ano);
    } 
    
    else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia <= 30) {
        printf("Data valida! %d/%d/%d",dia, mes,ano); 
        }

    else if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && dia <= 31) {
        printf("Data valida! %d/%d/%d",dia, mes,ano); 
        }

   // else if (mes == 2){
        //printf("verificar bissexto");
   // }

    else {
        printf("Data invalida! %d/%d/%d",dia, mes,ano);
    }
    
    

    return 0;
}