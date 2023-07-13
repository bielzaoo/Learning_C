#include <stdio.h>

void square(int side, char fillCharacter);

int main(void) {
    int side;
    char c;

    printf("Informe o caractere desejado: ");
    scanf("%c", &c);
    printf("Informe o lado quadrado: ");
    scanf("%d", &side);

    while (side != -1) {
        square(side, c);

        printf("\nInforme o caractere desejado: ");
        scanf("%c", &c);
        printf("\nInforme o lado quadrado: ");
        scanf("%d", &side);
    }

    return 0;
}

void square(int side, char fillCharacter) {
    int count;

    while (count < (side * side)) {
        if (count % side == 0) { printf("\n"); }
        printf("%c", fillCharacter);

        count++;
    }
}
