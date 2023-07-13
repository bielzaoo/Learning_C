#include <stdio.h>

int main(void) {
    int i, j;

    for (i = 1; i <= 10; i++) {
        for (j = 0; j < i; ++j) { printf("*"); }
        printf("\n");
    }
    printf("\n");

    for (i = 1; i <= 10; i++) {
        for (j = 10; j > i; --j) { printf("*"); }
        printf("\n");
    }
    printf("\n");

    for (i = 1; i <= 10; i++) {
        for (j = 10; j > i; --j) { printf("%s", "*"); }
        printf("\n");
    }

    return 0;
}
