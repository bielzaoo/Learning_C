#include <stdio.h>

void square(int side);

int main(void) {
    int side;

    printf("Informe o lado quadrado: ");
    scanf("%d", &side);

    while (side != -1) {
        square(side);

        printf("\nInforme o lado quadrado: ");
        scanf("%d", &side);
    }

    return 0;
}

void square(int side) {
    int count;

    while (count < (side * side)) {
        if (count % side == 0) { printf("\n"); }
        printf("*");

        count++;
    }
}
