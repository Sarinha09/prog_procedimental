#include <stdio.h>

// Definição da estrutura Funcionario
struct Funcionario {
    char nome[30];
    int idade;
    char sexo;
    char cpf[12];
    char dataNascimento[11];
    int codigoSetor;
    char cargo[30];
    float salario;
};

int main() {
    struct Funcionario funcionario = {"", 0, '\0', "", "", 0, "", 0.0};

    printf("Digite o nome do funcionario: ");
    scanf("%29s", funcionario.nome);

    printf("Digite a idade do funcionario: ");
    scanf("%d", &funcionario.idade);

    printf("Digite o sexo do funcionario (M/F): ");
    scanf(" %c", &funcionario.sexo);

    printf("Digite o CPF do funcionario: ");
    scanf("%11s", funcionario.cpf);

    printf("Digite a data de nascimento do funcionario (DD/MM/AAAA): ");
    scanf("%10s", funcionario.dataNascimento);

    printf("Digite o codigo do setor onde trabalha: ");
    scanf("%d", &funcionario.codigoSetor);

    printf("Digite o cargo que o funcionario ocupa: ");
    scanf("%29s", funcionario.cargo);

    printf("Digite o salario do funcionario: ");
    scanf("%f", &funcionario.salario);


    printf("\nDados do funcionario:\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %s\n", funcionario.cpf);
    printf("Data de Nascimento: %s\n", funcionario.dataNascimento);
    printf("Codigo do Setor: %d\n", funcionario.codigoSetor);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salario: %.2f\n", funcionario.salario);

    return 0;
}
