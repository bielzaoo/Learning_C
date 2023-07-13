#include <stdio.h>

int multiple(int x, int y);

int main(void) {
    int x, y;

    printf("Insira um par de numeros(-1 para sair): ");
    scanf("%d%d", &x, &y);

    while (x != -1) {
        multiple(x, y) ? printf("%d é multiple de %d \n", y, x)
                       : printf("%d não é multiple de %d \n", y, x);

        printf("Insira um par de numeros(-1 para sair): ");
        scanf("%d%d", &x, &y);
    }

    return 0;
}

int multiple(int x, int y) {
    if (x % y == 0) { return 1; }

    return 0;
}
