#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,ms;
    printf("Digite velocidade em MS: ");
    scanf("%f",&ms);

    km = ms*3.6;

    printf("%fMS = %f KM",ms,km);

    return 0;
}