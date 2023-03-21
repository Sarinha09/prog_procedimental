#include <stdio.h>
#include <stdlib.h>

int main (){
    int numero, m, d, c, u;    
    
    printf("Informe um valor de 4 digitos:");
    scanf("%d",&numero);

    m = numero/1000;
    c = numero/100-10*m;
    d = numero/10-100*m-10*c;
    u = numero/1-1000*m-100*c-10*d;
    printf("\n%d\n%d\n%d\n%d\n",m,c,d,u);
    return 0;
}