#include <stdio.h>

int main(void){
    int total, nota, contador;
    float media;

    total = 0;
    contador = 0;

    printf("Insira a nota, -1 para finalizar: ");
    scanf("%d", &nota);

    while (nota != -1) {
        total += nota;
        contador++;

        printf("Insira a nota, -1 para finalizar: ");
        scanf("%d", &nota);
    }

    if (contador > 0) {
        media = (float)total / contador;
        printf("Média: %f\n", media);
    }
    else {
        printf("Nenhuma nota foi digitada!\n");
    }

    return 0;
}
