#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;
    printf("Digite temperatura em F: ");
    scanf("%f",&f);


    c = (f-32)*5/9;

    printf("%fF =  %f C",f,c);

    return 0;
}