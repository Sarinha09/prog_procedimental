#include <stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

int diasNoMes(int mes, int ano) {
    int dias;

    if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
            dias = 29; 
        } else {
            dias = 28;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias = 30;
    } else {
        dias = 31;
    }

    return dias;
}

int dataParaDias(struct dma data) {
    int dias = 0;

    for (int i = 1; i < data.ano; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
            dias += 366; 
        } else {
            dias += 365;
        }
    }

    for (int i = 1; i < data.mes; i++) {
        dias += diasNoMes(i, data.ano);
    }

    dias += data.dia;

    return dias;
}

int diferencaDias(struct dma data1, struct dma data2) {
    int dias1 = dataParaDias(data1);
    int dias2 = dataParaDias(data2);

    return dias2 - dias1;
}

int main() {
    struct dma data1, data2;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int difDias = diferencaDias(data1, data2);

    printf("Número de dias entre as datas: %d\n", difDias);

    return 0;
}
