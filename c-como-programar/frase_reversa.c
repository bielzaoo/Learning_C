#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100
/*
 * Este codigo ainda nao funciona.
 * */

void reverse(char frase[], int size);

int main(void) {
  char frase[SIZE];
  char reverso[SIZE];
  char *tokenPtr;

  printf("Insira uma frase: ");
  fgets(frase, SIZE, stdin);

  reverse(frase, SIZE);

  return 0;
}

void reverse(char frase[], int size) {
  char *tokenPtr;

  tokenPtr = strtok(frase, " ");

  if (tokenPtr != NULL) {
    reverse(frase, size);
    printf("%s\n", tokenPtr);
    tokenPtr = strtok(NULL, " ");
  }
}
