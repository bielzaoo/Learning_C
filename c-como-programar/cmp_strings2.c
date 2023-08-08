#include <stdio.h>
#include <string.h>

#define SIZE 100 

int main(void){
    char string1[SIZE];
    char string2[SIZE];
    int qtd_caracteres; // qunatidade de caracteres a serem comparados.
    int ret;
    
    printf("Insira uma string: ");
    fgets(string1, SIZE, stdin);
    printf("Insira outra string: ");
    fgets(string2, SIZE, stdin);
    
    printf("\nDeseja coompara quantos caracteres: ");
    scanf("%d", &qtd_caracteres);

    ret = strncmp(string1, string2, qtd_caracteres);

    if(ret > 0){
        puts("A primeira string é maior.");
    } else if(ret < 0){
        puts("A primeira string é menor.");
    } else {
        puts("São iguais.");
    }

    return 0;
}