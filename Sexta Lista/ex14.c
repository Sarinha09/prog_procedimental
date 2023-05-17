#include <stdio.h>
#include <string.h>

struct carro {
    char marca[15];
    int ano;
    float preco;
};

int main() {
    struct carro carros[5];
    int i;
    
   
    for (i = 0; i < 5; i++) {
        printf("Digite os dados do carro %d:\n", i+1);
        printf("Marca (max. 15 letras): ");
        scanf("%s", carros[i].marca);
        printf("Ano: ");
        scanf("%d", &carros[i].ano);
        printf("Preco: ");
        scanf("%f", &carros[i].preco);
    }
    
  
    float p;
    int encontrado;
    
    do {
        printf("\nDigite um valor p (ou 0 para sair): ");
        scanf("%f", &p);
        encontrado = 0;
        for (i = 0; i < 5; i++) {
            if (carros[i].preco < p) {
                printf("\nCarro %d:\n", i+1);
                printf("Marca: %s\n", carros[i].marca);
                printf("Ano: %d\n", carros[i].ano);
                printf("Preco: %.2f\n", carros[i].preco);
                encontrado = 1;
            }
        }
        if (!encontrado) {
            printf("\nNenhum carro encontrado com preco menor que %.2f\n", p);
        }
    } while (p != 0);
    
    return 0;
}
