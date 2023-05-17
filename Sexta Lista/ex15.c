#include <stdio.h>
#include <string.h>

struct livro {
    char titulo[30];
    char autor[15];
    int ano;
};

int main() {
    struct livro livros[5];
    int i;
    

    for (i = 0; i < 5; i++) {
        printf("Digite os dados do livro %d:\n", i+1);
        printf("Título (max. 30 letras): ");
        scanf(" %[^\n]", livros[i].titulo);
        printf("Autor (max. 15 letras): ");
        scanf(" %[^\n]", livros[i].autor);
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
    }
    
    
    char titulo_busca[30];
    int encontrado = 0;
    
    printf("\nDigite o título do livro que deseja buscar: ");
    scanf(" %s", titulo_busca);
    
    for (i = 0; i < 5; i++) {
        if (strcmp(livros[i].titulo, titulo_busca) == 0) {
            printf("\nLivro encontrado:\n");
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
            encontrado = 1;
        }
    }
    
    if (!encontrado) {
        printf("\nNenhum livro encontrado com o título '%s'\n", titulo_busca);
    }
    
    return 0;
}
