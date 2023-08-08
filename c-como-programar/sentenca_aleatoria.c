#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define ARTIGOS 6
#define SUBSTANTIVOS 6
#define VERBOS 6
#define PREPOSICOES 6 

void pArray(const char frase[], int tam);

int main(void){
    const char *artigos[ARTIGOS] = {"o", "a", "um", "uma", "algum"};
    const char *substantivos[SUBSTANTIVOS] = {"menino", "menina", "cão", "cidade", "carro", "casa"};
    const char *verbos[VERBOS] = {"dirigiu", "saltou", "correu", "caminhou", "voou", "andou"};
    const char *preposicoes[PREPOSICOES] = {"para", "de", "sobre", "sob", "em", "desde"};
    char frase[50] = {0};
    int indice;
    int i;

    srand(time(NULL));
    

    for(i = 0; i < 20; i++){    
        indice = 1 + rand() % 5;

        strcpy(frase, artigos[indice]);
        strcat(frase, " ");
        strcat(frase, substantivos[indice]);
        strcat(frase, " ");
        strcat(frase, verbos[indice]);
        strcat(frase, " ");
        strcat(frase, preposicoes[indice]);
        strcat(frase, " ");
        strcat(frase, artigos[indice]);
        strcat(frase, " ");
        strcat(frase, substantivos[indice]);
    
        pArray(frase, 50);
    }
    

    return 0;
}

void pArray(const char frase[], int tam){
    int i;
    int spaces = 0;

    for(i = 0; frase[i] != '\0'; i++){
        if(frase[i] == ' '){
            spaces++;

            if(spaces == 5){
                printf("%c", frase[i]); // imprime o resto.
                printf("%c", toupper((int)frase[++i]));
                continue;
            } // end if interno
            
        }  // end if externo

        printf("%c", frase[i]); // imprime o resto.

    }
    printf(".\n");
}