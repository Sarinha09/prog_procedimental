#include <stdio.h>
#include <math.h>

int main() {

  float n1,n2,n3, cal;


   printf("Inseira 3 notas: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);


    cal = (n1 + n2 + (n3*2))/3;
    printf("A media do aluno foi: %.1f\n", cal);


   if (cal >= 60) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }


   return 0;
}