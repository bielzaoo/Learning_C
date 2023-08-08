#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD_LINHA 5   // quantidade de linhas do texto.
#define TAM_LINHA 100 // quantidade de caracteres por linhaa.

void mostrarTexto(const char texto[][TAM_LINHA], int linhas, int colunas);
int contaStrirng(char texto[][TAM_LINHA], const char *const searchKey,
                 int linhas, int colunas);

int main(void) {
  char texto[QTD_LINHA][TAM_LINHA];
  int qtd_apareceu;

  printf("Escreva um texto, abaixo. Cada linhaterá no máximo 100 chars:  ");
  for (int i = 0; i < QTD_LINHA; i++) {
    fgets(texto[i], TAM_LINHA, stdin);
  }

  mostrarTexto(texto, QTD_LINHA, TAM_LINHA);
  qtd_apareceu = contaStrirng(texto, "azul", QTD_LINHA, TAM_LINHA);
  printf("qtd_apareceu = %i\n", qtd_apareceu);

  return 00;
}

int contaStrirng(char texto[][TAM_LINHA], const char *const searchKey,
                 int linhas, int colunas) {
  int i;
  char *searchPtr;
  int qtd; // quantidad de vezes qeu a palavra apareceu no total.

  for (i = 0; i < linhas; i++) {
    searchPtr = strstr(texto[i], searchKey);
    while (searchPtr != NULL) {
      qtd++;
      searchPtr = strstr(searchPtr + 1, searchKey);
    }
  }

  return qtd;
}

void mostrarTexto(const char texto[][TAM_LINHA], int linhas, int colunas) {
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
