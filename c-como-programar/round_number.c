#include <math.h>
#include <stdio.h>

int main(void) {
    int x, y;

    printf("Informe um inteirio: ");
    scanf("%d", &x);

    while (x != -1) {
        printf("x = %d\n", x);
        y = floor(x + 0.5);
        printf("x = %d\n", y);

        printf("\nInforme um inteirio: ");
        scanf("%d", &x);
    }

    return 0;
}
