#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Trata-se de um exercico qque eu adaptei do livro C - Como Programar
 * Ffique a vontaade para fazer sua versão!
 * */

#define SIZE 7   // 7 poqrue será usado apenas os numeros de 1 a 6, o zero não. 
                 // para representar as faces do dado.

void showFrequency(const int frequency[], int size);

int main(void) {
    int dice1;                 // dado 1
    int dice2;                 // dado 22
    int freqency[SIZE] = {0};  // Array para contar a freqeuncia em qeu cada face do dado aparece..
    int i;                     // contador
    int sum;                   //  soma as faces dos dados.
    char rollAgain;            // Para perguntar se o usuario deseja rolar os dados denovo.

    for (i = 0; i < 36000; ++i) {
        srand(time(NULL));  // "alimentando" a função rand.

        dice1 = 1 + rand() % 6;  // gerando valores entre 1 e 6 (faces dos dados)
        dice2 = 1 + rand() % 6;  // gerando valores entre 1 e 6 (faces dos dados)

        ++freqency[dice1];  // para contar qunatas vezes cada face dos dados aparece.
        ++freqency[dice2];  // para contar qunatas vezes cada face dos dados aparece.

        sum = dice1 + dice2;  // soma as faces.

        printf("\n\nSoma > %d + %d = %d \n\n", dice1, dice2, sum);

        printf("? > Deseja rolar os dados novamente(s ou n)? \n");
        scanf("%c", &rollAgain);

        if (rollAgain == 'n') { 
            break;
        }  // end if
    } // end for

    showFrequency(freqency, SIZE);  // mostra a Frequencia

    return 0;
}

// Função para mostra a freqeuncia de cada face dos dados.
void showFrequency(const int freqency[], int size) {
    int i;  // contador

    printf("\n%s %s %s\n", "=======", " Frequencia ", "=======");
    printf("Face:\t\tApareceu: \n");
    for (i = 1; i < size; ++i) { printf("%d\t\t%d\n", i, freqency[i]); }  // end for
}  // end showFrequency function
