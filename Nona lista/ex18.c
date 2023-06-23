#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[31];
    int codigo;
    float preco;
} Produto;

int main() {

    int* vetor = (int*)malloc(1024 * sizeof(int));
    int** matriz = (int**)malloc(10 * sizeof(int*));
    for (int i = 0; i < 10; i++) {
        matriz[i] = (int*)malloc(10 * sizeof(int));
    }
    Produto* registros = (Produto*)malloc(50 * sizeof(Produto));
    char** texto = (char**)malloc(100 * sizeof(char*));
    for (int i = 0; i < 100; i++) {
        texto[i] = (char*)malloc(81 * sizeof(char));
    }
    for (int i = 0; i < 1024; i++) {
        vetor[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = i + j;
        }
    }

    for (int i = 0; i < 50; i++) {
        sprintf(registros[i].nome, "Produto %d", i);
        registros[i].codigo = i + 1;
        registros[i].preco = (i + 1) * 10.0;
    }
    strcpy(texto[0], "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. ");
    strcpy(texto[1], "Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. ");
    strcpy(texto[2], "Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.");


    printf("=-=-= Vetor 1024 Bytes =-=-=\n");
    for (int i = 0; i < 1024; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    printf("=-=-= Matriz 10x10 =-=-=\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("=-=-= Produtos =-=-=\n");
    for (int i = 0; i < 50; i++) {
        printf("Produto %d: Nome: %s, Codigo: %d, Preco: %.2f\n", i + 1, registros[i].nome, registros[i].codigo, registros[i].preco);
    }
    printf("\n");

    printf("Texto:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", texto[i]);
    }
    free(vetor);

    for (int i = 0; i < 10; i++) {
        free(matriz[i]);
    }
    free(matriz);
    free(registros);

    for (int i = 0; i < 100; i++) {
        free(texto[i]);
    }
    free(texto);
    return 0;
}
