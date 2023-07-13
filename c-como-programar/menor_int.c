#include <stdio.h>

int main(void) {
    int i;
    int menor = 9999;
    int num;

    do {
        printf("Insira um inteiro: ");
        scanf("%d", &num);

        for (i = num; i > 0; i--) {
            printf("Insira um inteiro: ");
            scanf("%d", &num);

            if (num < menor) {
                menor = num;
            } // end if
        } // end for
        printf("Acabou! :D\n");
        printf("menor = %d\n", menor);
    } while (i > 0);

    return 0;
}
