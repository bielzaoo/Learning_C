#include <stdio.h>

int main(void) {
    int i, soma = 0, num;

    do {
        printf("Insria um inteiro: ");
        scanf("%d", &num);
        for (i = num; i > 0; i--) {
            printf("Insria um inteiro: ");
            scanf("%d", &num);

            soma += num;
        }
        printf("Ola\n");
    } while (i > 0);

    printf("soma = %d\n", soma);

    return 0;
}
