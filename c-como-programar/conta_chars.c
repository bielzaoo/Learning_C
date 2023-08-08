#include <stdio.h>
#include <string.h>

#define LINES 5
#define LINE_SIZE 100

void showText(const char texto[][LINE_SIZE], int linhas, int colunas);
int countChar(const char texto[][LINE_SIZE], int keyChar);

int main(void) {
  char texto[LINES][LINE_SIZE];
  int i;  // contador
  char c; // caractere a ser buscado
  int qt; // qunaitdade de vezes que o caractere apareceu.

  puts("Insira um texto: ");
  for (i = 0; i < LINES; i++) {
    fgets(texto[i], LINE_SIZE, stdin);
  }

  printf("Insira o caractere a ser buscado: ");
  scanf("%c", &c);

  showText(texto, LINES, LINE_SIZE);
  qt = countChar(texto, (int)c);
  printf("\n'%c' apareceu %d vezes\n", c, qt);

  return 0;
}

int countChar(const char texto[][LINE_SIZE], int keyChar) {
  char *charPtr;
  int qt; // qunaitdade de vezes que o caractere apareceu

  for (int i = 0; i < LINES; i++) {
    charPtr = strchr(texto[i], keyChar);
    while (charPtr != NULL) {
      qt++;
      charPtr = strchr((charPtr + 1), keyChar);
    }
  }

  return qt;
}

void showText(const char texto[][LINE_SIZE], int linhas, int colunas) {
  printf("\n");

  puts("O texto digitado foi: ");
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      if (texto[i][j] == '\0') {
        break;
      } // end if inerno
      printf("%c", texto[i][j]);
    } //  end for interno
  }   //  end for externo
}
