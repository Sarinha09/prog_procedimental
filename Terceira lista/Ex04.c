#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    printf("=-=-= While =-=-=\n");
    while(num <= 100000){
        printf("%d\n",num);
        num = num+1000;
    }


    return 0;
}