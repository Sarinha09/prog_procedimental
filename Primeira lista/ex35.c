#include <stdio.h>
#include <math.h>

int main() {
    int a, b, H;

    printf("Digite valor de a: ");
    scanf("%d", &a);

    printf("Informe o valor de b: ");
    scanf("%d", &b);

    H = sqrt((a*a)+(b*b));

    printf("Hipotenusa:  %d", H);

    return(0);

} 
