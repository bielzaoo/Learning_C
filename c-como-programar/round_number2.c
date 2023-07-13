#include <math.h>
#include <stdio.h>

float arredInteiro(float x);
float arredDecimo(float x);
float arredCentesimo(float x);
float arredMilesimo(float x);

int main(void) {
    float x;
    float inteiro;
    float decimo;
    float centesimo;
    float milesimo;

    printf("Insira um número inteiro: ");
    scanf("%f", &x);

    while (x != -1) {
        printf("Antes dos ajustes: \n");
        printf("x = %f\n", x);
        printf("\nApós arredondamentos: \n");
        inteiro = arredInteiro(x);
        decimo = arredDecimo(x);
        centesimo = arredCentesimo(x);
        milesimo = arredMilesimo(x);

        printf("inteiro = %f\n", inteiro);
        printf("decimo = %f\n", decimo);
        printf("centesimo = %f\n", centesimo);
        printf("milesimo = %f\n", milesimo);

        printf("\nInsira um número inteiro: ");
        scanf("%f", &x);
    }

    return 0;
}

float arredInteiro(float x) {
    float y;

    y = floor(x + 0.5);
    return y;
}

float arredDecimo(float x) {
    float y;

    y = floor(x * 10 + 0.5) / 10;
    return y;
}

float arredCentesimo(float x) {
    float y;

    y = floor(x * 10 + 0.5) / 100;
    return y;
}

float arredMilesimo(float x) {
    float y;

    y = floor(x * 10 + 0.5) / 1000;

    return y;
}
