#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_JOGADORES 2
#define NUM_CARTAS 3
#define NUM_NAIPES 4
#define NUM_VALORES 13


struct Carta {
    char valor;
    char naipe;
};

int main() {
    struct Carta baralho[NUM_NAIPES][NUM_VALORES] = {
        {{'2', 'C'}, {'3', 'C'}, {'4', 'C'}, {'5', 'C'}, {'6', 'C'}, {'7', 'C'}, {'8', 'C'}, {'9', 'C'}, {'1', 'C'}, {'J', 'C'}, {'Q', 'C'}, {'K', 'C'}, {'A', 'C'}},
        {{'2', 'E'}, {'3', 'E'}, {'4', 'E'}, {'5', 'E'}, {'6', 'E'}, {'7', 'E'}, {'8', 'E'}, {'9', 'E'}, {'1', 'E'}, {'J', 'E'}, {'Q', 'E'}, {'K', 'E'}, {'A', 'E'}},
        {{'2', 'O'}, {'3', 'O'}, {'4', 'O'}, {'5', 'O'}, {'6', 'O'}, {'7', 'O'}, {'8', 'O'}, {'9', 'O'}, {'1', 'O'}, {'J', 'O'}, {'Q', 'O'}, {'K', 'O'}, {'A', 'O'}},
        {{'2', 'P'}, {'3', 'P'}, {'4', 'P'}, {'5', 'P'}, {'6', 'P'}, {'7', 'P'}, {'8', 'P'}, {'9', 'P'}, {'1', 'P'}, {'J', 'P'}, {'Q', 'P'}, {'K', 'P'}, {'A', 'P'}}
    };

    struct Carta jogadores[NUM_JOGADORES][NUM_CARTAS];

   
    srand(time(NULL));

    for (int i = 0; i < NUM_CARTAS; i++) {
        for (int j = 0; j < NUM_JOGADORES; j++) {
            int naipe = rand() % NUM_NAIPES;
            int valor = rand() % NUM_VALORES;
            jogadores[j][i] = baralho[naipe][valor];
        }
    }

 
    for (int i = 0; i < NUM_JOGADORES; i++) {
        printf("Cartas do jogador %d:\n", i + 1);
        for (int j = 0; j < NUM_CARTAS; j++) {
            printf("%c%c ", jogadores[i][j].valor, jogadores[i][j].naipe);
        }
        printf("\n\n");
    }

    return 0;
}
