#include <stdio.h>

int power(int base, int expo);

int main(void) {
    int base, expo;

    printf("%d\n", power(3, 4));

    return 0;
}

int power(int base, int expo) {
    return base * power(base, expo - 1);
}
