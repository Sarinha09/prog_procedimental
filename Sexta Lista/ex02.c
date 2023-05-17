#include <stdio.h>

struct Pessoa {
  char nome[50];
  int idade;
  char endereco[100];
};

int main() {
  struct Pessoa p;

  printf("Digite o nome: ");
  fgets(p.nome, 50, stdin);

  printf("Digite a idade: ");
  scanf("%d", &p.idade);

  printf("Digite o endereco: ");
  getchar(); 
  fgets(p.endereco, 100, stdin);

  printf("\nDados cadastrados:\n");
  printf("Nome: %s", p.nome);
  printf("Idade: %d\n", p.idade);
  printf("Endereco: %s", p.endereco);

  return 0;
}
