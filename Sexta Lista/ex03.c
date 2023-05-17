#include <stdio.h>
#include <string.h>

int main(){

    int i;

    struct aluno{
        char nome[50];
        int matricula;
        char curso[50];
    };

    struct aluno aluno[5];

    for(i = 0; i < 5; i++){
        printf("Nome do aluno: ");
        scanf("%s", &aluno[i].nome);
        printf("Matricula do aluno: ");
        scanf("%d", &aluno[i].matricula);
        printf("Curso do aluno: ");
        scanf("%s", &aluno[i].curso);

        printf("\n");
    }

    for(i = 0; i < 5; i++){
        printf("Aluno %d:\n", i+1);
        printf("Nome do aluno: %s\n",aluno[i].nome);
        printf("Matricula do aluno: %d\n",aluno[i].matricula);
        printf("Curso do aluno: %s\n",aluno[i].curso);

        printf("\n");
    }

    return 0;
}
