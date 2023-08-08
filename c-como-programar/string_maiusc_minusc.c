#include <stdio.h>
#include <ctype.h>

void up(const char string[], const int size);
void low(const char string[], const int size);

int main(void){
	char string[100] = {0};
	
	puts("Escreva uma linha de texto de ate 100 caracteres: ");
	fgets(string, 100, stdin);
	printf("\n");
	
	up(string, 100);

	low(string, 100);
	
	return 0;
}

// imprime maiusculo
void up(const char string[], const int size){
	int i;
	
	for(i = 0; i < size; i++){
		printf("%c", toupper((int)string[i]));
	}
	printf("\n");
}

// imprime minusculo
void low(const char string[], const int size){
	int i;
	
	for(i = 0; i < size; i++){
		printf("%c", tolower((int)string[i]));
	}
	printf("\n");
}