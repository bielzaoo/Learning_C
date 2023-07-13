#include <stdio.h>

int main(void){
    int i;
    int produto;

    for (i = 1; i < 15; i+=2) {
        produto *= i;
    }

    printf("produto = %d\n", produto);

    return 0;
}
