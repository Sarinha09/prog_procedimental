#include <stdio.h>

int maior(int n1, int n2);

int main()
{
    int n1, n2;
    printf("Digite 2 valores: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    maior(n1, n2);

    return 0;
}

int maior(int n1, int n2){
    if(n1 > n2){
        printf("%d eh numero maior", n1);
        return 0;
    }
    if(n2 > n1){
        printf("%d eh numero maior", n2);
        return 1;
    }
    if (n1 == n2){
        printf("%d e %d sao iguais", n1,n2);
        return 2;
    }
    
}