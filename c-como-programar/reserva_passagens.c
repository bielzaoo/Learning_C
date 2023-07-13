#include <stdio.h>
#define SEATS 11  // 11 porque 0 zero não será usado aqui paraa representar assentos
#define NOT_AGAIN -1
#define FULL -2

/*
 * Assentos de 1 a 5 pertencem a Primeria classe
 * Assentos de 6 a 10 pertencem a Classe Economica
 *
 * A variavel full é usaada para verifica se os assentes em determinada classe ja foram todos 
 * preenchidoos, cada classe  possui apenas 5 assentos. a cada volta do laço ela é incrementada.
 *
 * As constantes NOT_AGAIN e FULL possuem valores de minha escolha, poderia ser outro valor.
 *
 * Essa ideia  veio do exercico 6.21 do livro C - Como Programar.
 * */

void showSeats(const int seats[], int numberOfSeats);
int reserveFirst(int seats[], int numberOfSeats);
int reserveEconomic(int seats[], int numberOfSeats);

int main(void) {
    int seats[SEATS] = {0}; // assentos
    int i; // contador
    int option; 
    char changeClass; // deseja trocar de classe.

    for (i = 0; i < 10; ++i) {
        printf("Favor digite 1 para 'primeira classe'. \n");
        printf("Favor digite 2 para 'classe economica'. \n");
        scanf("%d", &option);

        if (option == 1) {
            if (reserveFirst(seats, SEATS) == NOT_AGAIN) {
                continue; // se não quiser reservar denovo na mesma classe, conntinua.
            } else {
                printf("\n\n[PRIMEIRA CLASSE CHEIA!]\n\n");
                printf("Deseja ir para classe economica? 's' ou 'n' ");
                scanf("%s", &changeClass);
                if (changeClass == 's') {
                    reserveEconomic(seats, SEATS);
                    printf("\n\n[Primeira e classe Economica CHEIAS]\n\n");
                    break;
                } else {
                    printf("\n\nO proximo voo saira em 3 horas.\n\n");
                    break;
                } // end else
            } // end else
        } else if (option == 2) {
            if (reserveEconomic(seats, SEATS) == NOT_AGAIN) {
                continue;  // se não quiser reservar denovo na mesma classe, conntinua.
            } else {
                printf("\n\n[CLASSE ECONOMICA CHEIA!]\n\n");
                printf("Deseja ir para primeira classe? 's' ou 'n' ");
                scanf("%c", &changeClass);
                if (changeClass == 's') {
                    reserveFirst(seats, SEATS);
                    printf("\n\n[Primeira e economica CHEIAS]\n\n");
                    break;
                }
                else {
                    printf("\n\nO proximo voo saira em 3 horas.\n\n");
                    break;
                } // end else
            } // end internal else
        } // end else if
    }  // end exterrnal for

    return 0;
}

/* Função para exibir os assentos. */
void showSeats(const int seats[], int numberOfSeats) {
    int i;

    printf("Primeria classe:\tClasse economica: \n");
    printf("N° 1 2 3 4 5\t\t   6 7 8 9 10\n    ");
    for (i = 1; i < numberOfSeats; ++i) {
        printf("%d ", seats[i]);

        if (i == 5) { printf("\t\t   "); }  // end if
    }  // end for
    printf("\n");

}  // end showSeats function


/* função para reserva da primeira classe */
int reserveFirst(int seats[], int numberOfSeats) {
    int first;
    int full = 1;  // essa variavel é como uma "flag" para saber se ja preencheu todos os assentos
    char again; // deseja reservar denovo

    for (first = 1; first <= 5; ++first) {
        if (full == 6) {
            showSeats(seats, SEATS);
            return FULL; 
        }
        seats[first] = 1;
        printf("\n\n===================\n");
        printf("Classe: Primeira\n- Assento: [%d]\n", first);
        printf("===================\n\n");

        showSeats(seats, SEATS);

        full++;

        printf("Deseja reservar mais um na primeira classe? 's' ou 'n' \n");
        scanf("%s", &again);

        if (again == 's') {
            continue;
        } else {
            return NOT_AGAIN;
            break;
        }  // end internal else

    }  // end external for
}  // end reserveFirst function

/* função para reserva da segunda classe */
int reserveEconomic(int seats[], int numberOfSeats) {
    int economic;
    int full = 1; // essa variavel é como uma "flag" para saber se ja preencheu todos os assentos
    char again; // deseja reservar denovo

    for (economic = 6; economic <= 10; ++economic) {
        if (full == 6) {
            showSeats(seats, SEATS);
            return FULL;
        }
        seats[economic] = 1;

        printf("\n\n===================\n");
        printf("Classe: Economica\n- Assento: [%d]\n", economic);
        printf("===================\n\n");

        showSeats(seats, SEATS);

        full++;

        printf("Deseja reservar mais um na segunda classe? 's' ou 'n' \n");
        scanf("%s", &again);

        if (again == 's') {
            continue;
        } else {
            return NOT_AGAIN;
            break;
        }  // end internal else

    }  // end external for
}  // end reserveSecond function
