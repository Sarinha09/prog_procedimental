#include <stdio.h>

int main () {

    int dia, mes, ano, anoatual = 2022;

    printf("Digite o dia do nascimentos: ");
    scanf("%i", &dia);
    printf("\n");
    printf("Digite o mes do nascimentos: ");
    scanf("%i", &mes);
    if(mes < 0 && mes > 12){
        printf("Data invalida");
        exit(0);
    }
    printf("\n");
    printf("Digite o ano do nascimentos: ");
    scanf("%i", &ano);
    if(ano < 0 && ano > anoatual){
        printf("Data invalida");
        exit(0);
    }
    printf("\n"); 

    switch(mes){
    
        case 1 :
        if(dia <= 31 && dia > 0){
                printf("Data valida");
            }
            else 
                printf("Data invalida");
        break;

        case 2 :
            if(ano % 400 == 0){
                if(dia <= 29 && dia > 0){
                printf("Data valida");
            }
            }
            if(ano % 400 != 0){
                if(dia <= 28 && dia > 0){
                printf("Data valida");
            }
            else 
                printf("Data invalida");
            }
        break;
        case 3 :
            
            if(dia <= 31 && dia > 0){
                printf("Data valida");
            }
            else 
                printf("Data invalida");
        
        break;
        case 4 :
            if(dia <= 30 && dia > 0){
                printf("Data valida");
            }
            else 
                printf("Data invalida");
        break;
        case 5 :
            if(dia <= 31 && dia > 0){
                printf("Data valida");
            }
            else 
                printf("Data invalida");
        break;

        case 6 :
            if(dia <= 30 && dia > 0){
                printf("Data valida");
            }
            else 
                printf("Data invalida");
        break;
        case 7 :
            if(dia <= 31 && dia > 0){
                printf("Data valida");
            }
            else 
                printf("Data invalida");
        break;
        case 8 :
            if(dia <= 31 && dia > 0){
                printf("Data valida");
            }
            else 
                printf("Data invalida");
        break;
        case 9 :
            if(dia <= 30 && dia > 0){
                printf("Data valida");
            }
            else 
                printf("Data invalida");
        break;
        case 10 :
            if(dia <= 31 && dia > 0){
                printf("Data valida");
            }
            else 
                printf("Data invalida");
        break;
        case 11 :
            if(dia <= 30 && dia > 0){
                printf("Data valida");
            }
            else 
                printf("Data invalida");
        break;
        case 12 :
            if(dia <= 31 && dia > 0){
                printf("Data valida");
            }
            else 
                printf("Data invalida");
        break;

        
        
        }
    printf("\n");
    return (0);

    }