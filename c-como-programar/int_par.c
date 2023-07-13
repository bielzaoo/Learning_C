#include <stdio.h>

int main(void) {
    int soma = 0;

    for (int i = 2; i < 30; i += 2) { soma += i; }
    printf("soma = %d\n", soma);

    return 0;
}
