#include <stdio.h>
#include <stdlib.h>

#define DIGITS 9 // ler numeros inteiros de 0 até 1000000(um milhão)
				 // caso queira ler numeors maiores, ajuste aqui.
				 // leve em consideração que fgets ler até n - 1. Por ex:
				 // No caso acima configurado ele vai
				 // ela vai ler ate 8 e vai colocar \0 no 
				 // indice 8. Portanto, você terá até 7 digitos livres.
				 // Logo, para saber qunatos digitos "livres" você terá, faça:
				 // n - 2

/*
 converte inteiros inseridos como stirngs, em inteieros 
 e faz a soma entre eles.
 são inseidos quatro inteiros, o exercicio pedia 
 que fosse assim..
*/
int main(void){
	char numero[DIGITS] = {0};
	int num;
	int soma = 0;
	
	printf("Digite quatro inteiros, um por vez: ");	
	for(int i = 0; i < 4; i++){

		fgets(numero, DIGITS, stdin);
		
		num = atoi(numero);
		soma += num;
	}

	printf("\nsoma: %d\n", soma);
	
	return 0;
}