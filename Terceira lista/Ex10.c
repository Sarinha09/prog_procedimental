#include <stdio.h>

int main() {

int i, soma=0;

for(i=1; i<=100; i++) {

if (i % 2 == 0)
soma += i;
}

printf("Soma dos 50 primeiros numeros: %d\n", soma);

return 0;

}