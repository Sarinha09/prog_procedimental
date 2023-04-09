#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int Altchico = 150, Altze = 110, ano = 0;

        while(Altze <= Altchico){
            Altchico += 2;
            Altze += 3;
            ano += 1;
        }

        printf("A altura final de chico sera: %icm", Altchico);
        printf("\nA altura final de ze sera: %icm", Altze);
        printf("\nQuantidade de anos para ze passar chico sera: %i", ano);

    return 0;
}