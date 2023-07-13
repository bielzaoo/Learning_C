#include <stdio.h>

int main(void) {
    int a;

    a = 5;

    printf("a = %d\n", a);
    printf("POS INC: %d\n", a++);
    printf("a = %d\n", a);

    a = 5;
    printf("a = %d\n", a);
    printf("PRE INC: %d\n", ++a);

    return 0;
}
