#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randNum(void);

int main(void) {
    int num;
    int correctNum;
    char playAgain;
    int exitOption = 0;

    printf(" > Eu tenho um numero de 1 a 1000.\n");
    printf(" > Voce consegue descobrir qual e?\n");
    printf("Digite sua primeira tnetativa: ");
    scanf("%d", &num);

    while (exitOption != 1) {
        if (num == correctNum) {
            printf(" > Excelente! voce desocbriu o numero!\n");
            printf(" > Gostaria de jogar novamente? ");
            scanf("%s", &playAgain);
            if (playAgain == 's' || playAgain == 'S') {
                randNum();
                num = 0;
                continue;
            } else if (playAgain == 'n' || playAgain == 'N') {
                printf("Ok! Saindo...\n");
                exitOption = 1;
            }

        }  // end external if
        else if (num > correctNum) {
            printf(" > Multo alto. Tente novamente! \n");
            scanf("%d", &num);
        } else if (num < correctNum) {
            printf(" > Muito baixo, Tente novamente. \n");
            scanf("%d", &num);
        } else {
            printf(" > Nao entendi! tente novamente: ");
            scanf("%d", &num);
        }
    }
    return 0;
}

int randNum(void) {
    srand((unsigned)time(NULL));
    return rand() % 1000;
}
