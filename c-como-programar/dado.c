#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*! \enum Status
 *
 *  Status do jogo
 */

enum Status { CONTINUE, WON, LOST };

int rollDice(void);

int main(void) {
    int sum;  // soma dos lados lanãdos
    int myPoint;
    float saldoBanca = 1000;
    float aposta;

    enum Status gameStatus;

    printf("Insira uma aposta: ");
    scanf("%f", &aposta);

    while (aposta > saldoBanca) {
        printf("Insira uma aposta: ");
        scanf("%f", &aposta);
    }

    srand(time(NULL));

    sum = rollDice();

    switch (sum) {
        case 7:
        case 11:
            gameStatus = WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;

        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            printf("O ponto é: %d\n", myPoint);
            break;
    }

    while (gameStatus == CONTINUE) {
        sum = rollDice();

        if (sum == myPoint) {
            gameStatus = WON;
        } else {
            if (sum == 7) { gameStatus = LOST; }  // end if
        }                                         // end else
    }                                             // end while

    if (gameStatus == WON) {
        saldoBanca += aposta;
        printf("Saldo banca: R$%.2f\n", saldoBanca);
        printf("Jogador vence\n");
    } else {
        saldoBanca -= aposta;
        printf("Saldo banca: R$%.2f\n", saldoBanca);
        if (saldoBanca == 0) { printf("Sinto muito! voce está quebrado!\n"); }
        printf("Joagdor perde\n");
    }

    return 0;
}

int rollDice(void) {
    int dice1;
    int dice2;
    int workSum;

    dice1 = 1 + (rand() % 6);
    dice2 = 1 + (rand() % 6);

    workSum = dice1 + dice2;

    printf("Jogador rolou %d + %d = %d\n", dice1, dice2, workSum);

    return workSum;
}
