#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra_m, letra_mi;

    printf("Informe uma letra maiuscula: ");
    scanf("%c",&letra_m);


    letra_mi = letra_m + 32;
   
    printf("Minusculo: %c",letra_mi);

    return 0;
}