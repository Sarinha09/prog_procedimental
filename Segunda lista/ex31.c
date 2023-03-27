#include <stdio.h>

int main() {
    float altura, peso;
    char class;

    printf("Digite a altura (em metros) e o peso (em kg) da pessoa: ");
    scanf("%f %f", &altura, &peso);

    if (altura < 1.2) {
        if (peso <= 60) {
            class = 'A'; 
        } 
        else if (peso <= 90) {
            class = 'D';
        } 
        else {
            class = 'G';
        }
    } 
    else if (altura <= 1.7) {
        if (peso <= 60) {
            class = 'B';
        } 
        else if (peso <= 90) {
            class = 'E';
        } 
        else {
            class = 'H';
        }
    } 
    else {
        if (peso <= 60) {
            class = 'C';
        } 
        else if (peso <= 90) {
            class = 'F';
        } 
        else {
            class = 'I';
        }
    }

    printf("Sua classificacao eh: %c\n", class);
    return 0;
}