#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int ch, cm, ph, pm, dh, dm; 
    float preco; 
    printf("Informe a hora de chegada (hh mm): ");
    scanf("%d %d", &ch, &cm);
    printf("Informe a hora de partida (hh mm): ");
    scanf("%d %d", &ph, &pm);


    dh = ph - ch;
    dm = pm - cm;


    if (dh < 0) {
        dh += 24;
    }

    if (dm < 0) {
        dm += 60;
        dh--;
    }

    if (dh <= 2) {
        preco = ceil(dh + (float)dm / 60) * 1;
    } else if (dh <= 4) {
        preco = 2 + ceil(dh + (float)dm / 60 - 2) * 1.4;
    } else {
        preco = 4.8 + ceil(dh + (float)dm / 60 - 4) * 2;
    }

    printf("O preco a ser pago e: R$%.2f", preco);

    return 0;
}