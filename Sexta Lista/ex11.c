#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 10
#define MEDIA_MINIMA 5.0


struct Aluno {
    char nome[50];
    int matricula;
    float mediaFinal;
};

int main() {
    struct Aluno alunos[MAX_ALUNOS];
    struct Aluno aprovados[MAX_ALUNOS];
    struct Aluno reprovados[MAX_ALUNOS];


    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Digite os dados do aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Media Final: ");
        scanf("%f", &alunos[i].mediaFinal);

        printf("\n");
    }

    int numAprovados = 0;
    int numReprovados = 0;

    for (int i = 0; i < MAX_ALUNOS; i++) {
        if (alunos[i].mediaFinal >= MEDIA_MINIMA) {
            aprovados[numAprovados] = alunos[i];
            numAprovados++;
        } else {
            reprovados[numReprovados] = alunos[i];
            numReprovados++;
        }
    }


    printf("Alunos Aprovados:\n");
    for (int i = 0; i < numAprovados; i++) {
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Matricula: %d\n", aprovados[i].matricula);
        printf("Media Final: %.2f\n", aprovados[i].mediaFinal);
        printf("\n");
    }


    printf("Alunos Reprovados:\n");
    for (int i = 0; i < numReprovados; i++) {
        printf("Nome: %s\n", reprovados[i].nome);
        printf("Matricula: %d\n", reprovados[i].matricula);
        printf("Media Final: %.2f\n", reprovados[i].mediaFinal);
        printf("\n");
    }

    return 0;
}
