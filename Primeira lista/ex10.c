#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,ms;
    printf("Digite velocidade em KM: ");
    scanf("%f",&km);


    ms = km/3.6;

    printf("%fKM=  %f MS",km,ms);

    return 0;
}