#include <stdio.h>

int main(void) {
    int fatorial = 1;
    int i, j;
    
    printf("n\tn!\n");
    for (i = 5; i > 0; i--) {
        for (j = i; j > 0; j--) { fatorial *= j; }
        printf("%d\t%d\n", i, fatorial);
        fatorial = 1;
    }

    return 0;
}
