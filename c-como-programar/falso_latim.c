#include <stdio.h>
#include <strings.h>

#define SIZE 100
void printLatimWord(const char *wordPtr);

/*
	Imprime uma frase em falso latim.
*/

int main(void){
	char frase[SIZE];
	char *tokenPtr;
	
	printf("Insira um frase: ");
	fgets(frase, SIZE, stdin);
	printf("\n");
	
	tokenPtr = strtok(frase, " ");
	
	while(tokenPtr != NULL){
		printLatimWord(tokenPtr);
		tokenPtr = strtok(NULL, " ");
	}
	
	return 0;
}

void printLatimWord(const char *wordPtr){
	int strLength;
	
	strLength = strlen(wordPtr); // calcula tamanho da string
	
	for(int i = 1; i < strLength-1; i++){
		printf("%c", wordPtr[i]);
	}
	printf("%c%s ", wordPtr[0], "ei"); // imprime o primeiro caractere 
									   // no final + "ei".
	
}