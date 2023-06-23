#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int ano_nascimento;
} Aluno;

int main() {
    int num_alunos;
    printf("Quantos alunos vao ser cadastrado?: ");
    scanf("%d", &num_alunos);

    Aluno* alunos = (Aluno*)malloc(num_alunos * sizeof(Aluno));

    if (alunos == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    for (int i = 0; i < num_alunos; i++) {
        printf("\n=-=-= Aluno %d =-=-=\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Sobrenome: ");
        scanf("%s", alunos[i].sobrenome);
        printf("Ano de Nascimento: ");
        scanf("%d", &alunos[i].ano_nascimento);
    }

    printf("\nDados\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("=-=-= Aluno %d =-=-=\n", i + 1);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de Nascimento: %d\n", alunos[i].ano_nascimento);
        printf("\n");
    }

    free(alunos);

    return 0;
}
