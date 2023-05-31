#include <stdio.h>

int main() {
    int array[5];
    int *ptr = array; 

    printf("Digite 5 inteiros:\n");

   
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr);
        ptr++; 
    }

    ptr = array; 

    printf("O dobro:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *ptr * 2);
        ptr++; 
    }

    return 0;
}