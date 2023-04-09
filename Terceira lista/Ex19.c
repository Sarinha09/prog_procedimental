#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int saque, cem = 0, cinquenta = 0, vinte= 0, dez= 0, cinco= 0, dois= 0, um= 0;

    printf("Digite o valor a ser sacado: ");
    scanf("%i", &saque);

    while(saque >= 100){
        saque -= 100;
        cem += 1;
    }
    while(saque >= 50){
        saque -= 50;
        cinquenta += 1;
    }
    while(saque >= 20){
        saque -= 20;
        vinte += 1;
    }
    while(saque >= 10){
        saque -= 10;
        dez += 1;
    }
    while(saque >= 5){
        saque -= 5;
        cinco += 1;
    }
    while(saque >= 2){
        saque -= 2;
        dois += 1;
    }
    while(saque >= 1){
        saque -= 1;
        um += 1;
    }

    printf("\nserao preciso %i nota(s) de 100", cem);
    printf("\nserao preciso %i nota(s) de 50", cinquenta);
    printf("\nserao preciso %i nota(s) de 20", vinte);
    printf("\nserao preciso %i nota(s) de 10", dez);
    printf("\nserao preciso %i nota(s) de 5", cinco);
    printf("\nserao preciso %i nota(s) de 2", dois);
    printf("\nserao preciso %i nota(s) de 1", um);
    
    return 0;
}