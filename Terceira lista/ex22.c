#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int multi, i,j, Maior_P = 0, digitos = 0, temp, inverso, cifra, fator1, fator2;


    for (j = 100; j <= 999; j++) {
        for (i = 100; i <= 999; i++) {
            multi = i * j;

            if(multi > Maior_P){
                temp = multi;
                while (temp != 0) {
                    digitos++;
                    temp /= 10;
                }
            }

            temp = multi;
                inverso = 0;
                while(temp != 0) {
                    cifra = temp % 10;
                    inverso += cifra * pow(10, digitos - 1);
                    temp /= 10;
                    digitos--;
                }

            if (multi == inverso) {
                    Maior_P = inverso;
                    fator1 = j;
                    fator2 = i;
            }

        }
}
    printf("O maior palindromo eh formado pela multiplicacao de %d x %d = %d\n\n", fator1, fator2, Maior_P);

    return 0;


}