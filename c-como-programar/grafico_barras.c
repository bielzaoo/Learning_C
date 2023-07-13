#include <stdio.h>

int main(void) {
    int num;
    int i;
    
    printf("Insria um número(1-30): ");
    scanf("%d", &num);

    for (i = 0; i < num; ++i) { printf("*"); }

    return 0;
}
