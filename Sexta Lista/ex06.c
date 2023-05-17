#include <stdio.h>

 struct cadastro {
    int matricula;
    char nome[50];
    int codigoDisciplina;
    float nota1;
    float nota2;
} Aluno;

int main() {
    struct cadastro alunos[10];
    int numAlunos;
    int i;

    printf("Informe o número de alunos (até 10): ");
    scanf("%d", &numAlunos);

    if (numAlunos > 10) {
        printf("O número máximo de alunos permitido é 10.\n");
        return 0;
    }

    
    for (i = 0; i < numAlunos; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Código da Disciplina: ");
        scanf("%d", &alunos[i].codigoDisciplina);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }

   
    printf("\nListagem final dos alunos:\n");
    printf("Matrícula\tNome\t\tMédia Final\n");

    for (i = 0; i < numAlunos; i++) {
        float media = (alunos[i].nota1 * 1.0 + alunos[i].nota2 * 2.0) / 3.0;

        printf("%d\t\t%s\t\t%.2f\n", alunos[i].matricula, alunos[i].nome, media);
    }

    return 0;
}
