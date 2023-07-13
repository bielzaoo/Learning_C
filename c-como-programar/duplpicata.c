#include <stdio.h>
#define SIZE 20

int main(void) {
    int num;
    int numeros[SIZE] = {0};
    int i;
    int j;

    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; j++) {
            if (numeros[j] == num) {
                printf("DP ");
            } else {
                printf("%d\n", num);
            }  // end else
        }      // end internal for

        printf("\nDigite um numnero: ");
        scanf("%d", &num);
    }  // end external forr

    return 0;
}
