#include <stdio.h>

int main() {
    float matriz[3][3] = {
        {1.1, 1.2, 1.3},
        {2.1, 2.2, 2.3},
        {3.1, 3.2, 3.3}
    };
    float *ptr = &matriz[0][0]; 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereco do elemento [%d][%d]: %p\n", i, j, ptr);
            ptr++; 
        }
    }

    return 0;
}