#include <stdio.h>

int potencia(int base, int exp);

int main(void){
    int base, expo;

    printf("Insira a base: ");
    scanf("%d", &base);

    printf("Insira o expoente: ");
    scanf("%d", &expo);
    
    printf("%d elevado a %d = %d\n", base, expo, potencia(base, expo));

    return 0;
}

int potencia(int base, int exp){
    int result = base;

    for (int i = 1; i < exp; i++) {
        result *= base;
    }

    return result;
}
