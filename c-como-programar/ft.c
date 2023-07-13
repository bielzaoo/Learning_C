#include <stdio.h>

int main(void){
    
    return 0;
}

int fatorial(int num){
    int resultado;

    if (num == 0) {
        return 1;
    }
    else {
        return num * fatorial(num - 1);
    }
}

