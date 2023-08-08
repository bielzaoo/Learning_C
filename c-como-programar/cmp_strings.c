#include <stdio.h>
#include <strings.h>

#define SIZE 100 
 
int main(void){
    int ret;
    char string1[SIZE];
    char string2[SIZE];

    printf("nsira uma string: ");
    fgets(string1, SIZE, stdin);
    printf("Insira outra skin: ");
    fgets(string2, SIZE, stdin);

    ret = strcmp(string1, string2);

    if(ret > 0){
        printf("A primeira string é maior que a segunda..\n");
    } else if(ret < 0){
        printf("A segunda string é maior que a primeira.\n");
    } else{
        printf("A strings são iguais, portanto, possuem o mesmo tamanho.,\n");
    }

    return 0;
}