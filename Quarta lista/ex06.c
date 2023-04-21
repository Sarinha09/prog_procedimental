#include <stdio.h>
#include <stdlib.h>

int converter(int hours, int minutes, int seconds);

int main() {
    int horas, minutos, segundos, total;
    printf("Digite as horas, minutos e segundos: ");
    scanf("%d",&horas);
    scanf("%d",&minutos);
    scanf("%d",&segundos);


    total = converter(horas, minutos, segundos);
    printf("%d horas, %d minutos e %d segundos eh igual a %d segundos.\n", horas, minutos, segundos, total);
    return 0;
}

int converter(int horas, int minutos, int segundos) {
    int total;
    total = horas * 3600 + minutos * 60 + segundos;
    return total;
}