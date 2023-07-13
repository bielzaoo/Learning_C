#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int flip(void);

int main(void) {
    int cara, coroa;

    for (int i = 0; i < 100; i++) {
        Sleep(2);  // Para rand() variar entre 0 e 1 entre as repetições.
        if (flip()) {
            printf("coroa\n");
            coroa++;
        } else {
            printf("cara\n");
            cara++;
        }
    }
    printf("\ncoroa = %d\n", coroa);
    printf("\ncara = %d\n", cara);

    return 0;
}

int flip(void) {
    srand(time(NULL));
    return (0 + (rand() % 2));
}
