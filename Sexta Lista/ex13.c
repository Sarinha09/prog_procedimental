#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char endereco[100];
    char dataNascimento[11];
    char cidade[50];
    char cep[9];
    char email[50];

    printf("Digite seus dados pessoais:\n");

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Endereço: ");
    fgets(endereco, sizeof(endereco), stdin);

    printf("Data de Nascimento (DD/MM/AAAA): ");
    fgets(dataNascimento, sizeof(dataNascimento), stdin);

    printf("Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);

    printf("CEP: ");
    fgets(cep, sizeof(cep), stdin);

    printf("E-mail: ");
    fgets(email, sizeof(email), stdin);


    int isValid = 1;

    if (strlen(dataNascimento) != 11 ||
        dataNascimento[2] != '/' ||
        dataNascimento[5] != '/') {
        printf("Data de Nascimento inválida!\n");
        isValid = 0;
    }


    if (strlen(cep) != 9) {
        printf("CEP inválido!\n");
        isValid = 0;
    }
    else {
        for (int i = 0; i < 8; i++) {
            if (!isdigit(cep[i])) {
                printf("CEP inválido!\n");
                isValid = 0;
                break;
            }
        }
    }


    if (strchr(email, '@') == NULL) {
        printf("E-mail inválido!\n");
        isValid = 0;
    }


    if (isValid) {
        printf("\n--- Informações Pessoais ---\n");
        printf("Nome: %s", nome);
        printf("Endereço: %s", endereco);
        printf("Data de Nascimento: %s", dataNascimento);
        printf("Cidade: %s", cidade);
        printf("CEP: %s", cep);
        printf("E-mail: %s", email);
    }
    else {
        printf("\nAlguma informação estava incorreta. Por favor, verifique os dados e tente novamente.\n");
    }

    return 0;
}
