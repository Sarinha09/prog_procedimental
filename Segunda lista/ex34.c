#include <stdio.h>

int main() {
    float nota;
    int faltas;

    printf("Digite sua: ");
    scanf("%f", &nota);

    printf("Digite suas faltas: ");
    scanf("%d", &faltas);

    if (faltas <= 20){
        if (nota >= 9.0 && nota <= 10.0) {
            printf("Conceito A\n");
        } else if (nota >= 7.5 && nota < 9.0) {
            printf("Conceito B\n");
        } else if (nota >= 5.0 && nota < 7.5) {
            printf("Conceito C\n");
        } else if (nota >= 4.0 && nota < 5.0) {
            printf("Conceito D\n");
        } else if (nota >= 0.0 && nota < 4.0) {
            printf("Conceito E\n");
        } else {
            printf("Nota inválida\n");
        }
    }

      else if (faltas > 20) {
        if (nota >= 9.0 && nota <= 10.0) {
            printf("Conceito: B\n");
        } 
        else if (nota >= 7.5 && nota < 9.0) {
            printf("Conceito: C\n");
        } 
        else if (nota >= 5.0 && nota < 7.5) {
            printf("Conceito: D\n");
        } 
        else if (nota >= 4.0 && nota < 5.0) {
            printf("Conceito: E\n");
        } 
        else if (nota >= 0.0 && nota < 4.0) {
            printf("Conceito: E\n");
        }
         else {
            printf("Nota inválida\n");
        }
      }
        



return 0;
}