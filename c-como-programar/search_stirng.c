#include <stdio.h>
#include <string.h>

#define SIZE 100  // tamanho da frase a ser inserida
#define SIZE_KEY 20  // tamanho da palavra a ser buscada na frase inserida

int main(void) { 
  char *searhPtr;
  char searchKey[SIZE_KEY];
  char frase[SIZE];

  printf("Insira uma frase: ");
  fgets(frase, SIZE, stdin);

  printf("Qual palabra deseja procurar na frase acima? ");
  scanf("%s", searchKey);

  printf("%s\n", searchKey);

  searhPtr = strstr(frase, searchKey);
  while (searhPtr != NULL) {
    printf("%s\n", searhPtr);
    searhPtr = strstr((searhPtr + 1), searchKey);
  }

  return 0; 
}
