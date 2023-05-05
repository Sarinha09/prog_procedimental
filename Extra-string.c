
#include <stdio.h>

#include <string.h>

int main(){

    char string[100];

    int i, j,tamanho;

    printf("Escreva uma string: ");

    fgets(string, 100, stdin);

    tamanho = strlen(string);

    for(i = 0; i < tamanho; i++){

        if(string[i] == 'r' && string[i+1] == ' '){

            continue;

        }

        else if(string[i] == 'r' && string[i+1] == 'r'){

            string[i] = 'l';

        for(j = i+1; j < tamanho; j++){

            string[j] = string[j+1];}

        }

                    

        else if(string[i] == 'r'){

                string[i] ='l';

            }

    }

    printf("Palavra: %s", string);

    

    

    return 0;

    

}
