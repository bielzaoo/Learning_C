#include <stdio.h>

#define SIZE 10

int main(void) {
    int n[SIZE] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
    int j;
    int i;

    printf("%s%13s%17s\n", "Elemento", "Valor", "Histograma");

    for (i = 0; i < SIZE; ++i) {
        printf("%7d%13d\t   ", i, n[i]);

        for (j = 1; j < n[i]; ++j) { printf("%c", '*'); }

        printf("\n");
    }

    return 0;
}
