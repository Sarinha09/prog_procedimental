#include <stdio.h>

int main() {
    float nota_lab, nota_sem, nota_final, media;

    printf("Insira a nota do trabalho de laboratorio: ");
    scanf("%f", &nota_lab);

    printf("Insira a nota da avaliacao semestral: ");
    scanf("%f", &nota_sem);

    printf("Insira a nota do exame final: ");
    scanf("%f", &nota_final);

    if ((nota_lab >= 0 && nota_lab <= 10) && (nota_sem >= 0 && nota_sem <= 10) && (nota_final >= 0 && nota_final <= 10))
    {
        media = (nota_lab*2 + nota_sem*3 + nota_final*5) / 10;
        printf("A media foi: %.1f\n", media);

        
        if (media >= 0 && media < 3) {
        printf("Aluno reprovado!\n");
        }   
        else if (media >= 3 && media < 5) {
        printf("Aluno em recuperacao!\n");
        } 
        else {
        printf("Aluno aprovado!\n");
        }

    }

    else{
        printf("Notas invalidas!");
    }
    

    return 0;
}