#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float x, y, z, media;

    printf("Escolha uma opcao:\n");
    printf("(1) Geometrica\n");
    printf("(2) Ponderada\n");
    printf("(3) Harmonica\n");
    printf("(4) Aritmetica\n");
    scanf("%d", &opcao);

    printf("Digite tres numeros inteiros positivos: ");
    scanf("%f %f %f", &x, &y, &z);

    if(opcao == 1){
        media = cbrt(x * y * z);
        printf("Media geometrica: %.2f\n", media);
    }
    else if(opcao == 2){
        media = (x + 2*y + 3*z) / 3;
        printf("Media ponderada: %.2f\n", media);
    }
    else if(opcao == 3){
        media = 1 / (1/x + 1/y + 1/z);
        printf("Media harmonica: %.2f\n", media);
    }
    else if(opcao == 3){
       media = (x + y + z) / 3;
       printf("Media aritmetica: %.2f\n", media);
    }

    else{
        printf("error: opcao invalida");
    }
    return 0;
}