#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1, num2 = 1, num3 = 1;

    printf("=-=-= For =-=-=\n");
    for(num = 1; num <= 100; num++){
        printf("%d ",num);
    }
    printf("\n");
    printf("=-=-= While =-=-=\n");
    while(num2 <= 100){
        printf("%d ",num2);
        num2 = num2+1;
    }
    printf("\n");
    printf("=-=-= Do while =-=-=\n");
    do{
        printf("%d ",num3);
        num3 = num3+1;
    } while(num3 <= 100);
        
    return 0;
}