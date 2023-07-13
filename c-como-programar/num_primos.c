#include <stdio.h>

int primo(int num);

int main(void) {
    for (int i = 0; i < 10000; i++) {
        if (primo(i)) printf("%d -> primo\n", i);
    }

    return 0;
}

int primo(int num) {
    if (num % 2 != 0) {
        return 1;  // é primo.
    }

    return 0;
}
