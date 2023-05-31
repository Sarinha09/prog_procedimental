#include <stdio.h>

int stringContida(char *str1, char *str2) {
    char *p1, *p2, *p3;
    
    while (*str1) {
        p1 = str1;
        p2 = str2;
        
        while (*p1 && *p2 && *p1 == *p2) {
            p1++;
            p2++;
        }
        
        if (!*p2)
            return 1;
        
        str1++;
    }
    
    return 0;
}

int main() {
    char string1[100], string2[100];
    
    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    
    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);
    
    if (stringContida(string1, string2))
        printf("A segunda string ocorre dentro da primeira.\n");
    else
        printf("A segunda string nn ocorre dentro da primeira.\n");
    
    return 0;
}
