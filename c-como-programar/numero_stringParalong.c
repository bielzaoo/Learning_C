#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void showNumber(char number[], int size);

int main(void) {
  char number[15];
  char *dddPtr;
  char buffer[5];
  long numberReturned;

  printf("Insira um numero (formato: (55) 5555-5555): ");
  fgets(number, 15, stdin);

  showNumber(number, 15);

  return 0;
}

void showNumber(char number[], int size) {
  char *dddPtr;    // ponteiro para o DDD.
  char *numberPtr; // ponteiro para as partes do numero.
  int ddd;         // vai "segurar" o DDD convertido para int.
  char buffer[15]; // um buffer para segurar a string original
  long NumberLong; // Vai segurar o novo numero a ser retornado, convertidoo
                   // para long.
  char numbertoLong[9]; // esse array é apenas para juntar as partes do
                        // numero que serao convertidas para long.

  strcpy(buffer, number); // salva a string orginal no buffer

  dddPtr = strtok(number, "()"); // pega o DDD
  ddd = atol(dddPtr);

  strcpy(number, buffer); // Colocara string denovo no array original

  numberPtr = strtok(number, " ");
  numberPtr = strtok(NULL, "-");

  strcpy(numbertoLong, numberPtr); // coloca a primeira parte no array para
                                   // ser convertida para long
  numberPtr = strtok(NULL, "-");

  strcat(numbertoLong, numberPtr); // coloca a segunda parte no array para
                                   // ser convertida para long

  NumberLong = atol(numbertoLong);
  printf("%d ", ddd);
  printf("%ld\n", NumberLong);
}
