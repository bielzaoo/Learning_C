#include <stdio.h>

int main(void) {
    printf("DEC\tOCT\tHEX\n");
    for (int i = 0; i < 256; i++) { printf("%d\t%o\t%x\n", i, i, i); }

    return 0;
}
