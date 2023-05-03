#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int n;

    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    strncat(str1, str2, n); 
    str1[strlen(str1)] = '\0'; 

    printf("Resultado: %s\n", str1);

    return 0;
}
