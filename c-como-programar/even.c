#include <stdio.h>

int even(int num);

int main(void) {
    int num;

    printf("Insira um initeiro: ");
    scanf("%d", &num);
    while (num != -1) {
        even(num) ? printf("%d é par\n", num) : printf("%d é ímpar..\n", num);

        printf("Insira um initeiro: ");
        scanf("%d", &num);
    }

    return 0;
}

int even(int num) {
    if (num % 2 == 0) {
        return 1;  // então o número é par.
    }

    return 0;  // senão, pe ímpar.
}
