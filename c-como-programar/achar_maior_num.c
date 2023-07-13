#include <stdio.h>

int main(void){
	int contador = 0, maior = 0, numero;
	
	while (contador < 10) {
		printf("Informe um número: ");
		scanf("%d", &numero);
		
		if (numero > maior){
			maior = numero;
		}
		contador++;
	}
	printf("Maior: %d\n", maior);

	return 0;;
}
