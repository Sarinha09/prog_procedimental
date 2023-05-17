#include <stdio.h>
#include <string.h>

#define NUM_ALUNOS 5
#define TAM_NOME 50

typedef struct {
    int matricula;
    char nome[TAM_NOME];
    float nota_prova1;
    float nota_prova2;
    float nota_prova3;
} Aluno;

int main() {
    Aluno alunos[NUM_ALUNOS];
    int i;

    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf("%[^\n]s", alunos[i].nome);
        printf("Nota da primeira prova: ");
        scanf("%f", &alunos[i].nota_prova1);
        printf("Nota da segunda prova: ");
        scanf("%f", &alunos[i].nota_prova2);
        printf("Nota da terceira prova: ");
        scanf("%f", &alunos[i].nota_prova3);
        printf("\n");
    }


    int aluno_maior_nota_prova1 = 0;
    for (i = 1; i < NUM_ALUNOS; i++) {
        if (alunos[i].nota_prova1 > alunos[aluno_maior_nota_prova1].nota_prova1) {
            aluno_maior_nota_prova1 = i;
        }
    }

    printf("Aluno com maior nota na primeira prova:\n");
    printf("Nome: %s\n", alunos[aluno_maior_nota_prova1].nome);
    printf("Matrícula: %d\n", alunos[aluno_maior_nota_prova1].matricula);
    printf("Nota da primeira prova: %.2f\n", alunos[aluno_maior_nota_prova1].nota_prova1);
    printf("\n");

    int aluno_maior_media_geral = 0;
    float maior_media_geral = (alunos[0].nota_prova1 + alunos[0].nota_prova2 + alunos[0].nota_prova3) / 3;
    for (i = 1; i < NUM_ALUNOS; i++) {
        float media_geral = (alunos[i].nota_prova1 + alunos[i].nota_prova2 + alunos[i].nota_prova3) / 3;
        if (media_geral > maior_media_geral) {
            maior_media_geral = media_geral;
            aluno_maior_media_geral = i;
        }
    }

    printf("Aluno com maior média geral:\n");
    printf("Nome: %s\n", alunos[aluno_maior_media_geral].nome);
    printf("Matrícula: %d\n", alunos[aluno_maior_media_geral].matricula);
    printf("Média geral: %.2f\n", maior_media_geral);
    printf("\n");


    int aluno_menor_media_geral = 0;
    float menor_media_geral = (alunos[0].nota_prova1 + alunos[0].nota_prova2 + alunos[0].nota_prova3) / 3;
    for (i = 1; i < NUM_ALUNOS; i++) {
        float media_geral = (alunos[i].nota_prova1 + alunos[i].nota_prova2 + alunos[i].nota_prova3) / 3;
        if (media_geral < menor_media_geral) {
            menor_media_geral = media_geral;
            aluno_menor_media_geral = i;
        }
    }

    printf("Aluno com menor média geral:\n");
    printf("Nome: %s\n", alunos[aluno_menor_media_geral].nome);
    printf("Matrícula: %d\n", alunos[aluno_menor_media_geral].matricula);
    printf("Média geral: %.2f\n", menor_media_geral);
    printf("\n");


    for (i = 0; i < NUM_ALUNOS; i++) {
        float media_geral = (alunos[i].nota_prova1 + alunos[i].nota_prova2 + alunos[i].nota_prova3) / 3;
        if (media_geral >= 6) {
            printf("Aluno %s, matrícula %d, foi aprovado.\n", alunos[i].nome, alunos[i].matricula);
        } else {
            printf("Aluno %s, matrícula %d, foi reprovado.\n", alunos[i].nome, alunos[i].matricula);
        }
    }

    return 0;
}
