#include <stdio.h>

float smallestFloat(float x, float y, float z);

int main(void) {
    float x, y, z;

    printf("Insira um numero decimal: ");
    scanf("%f", &x);
    printf("Insira outro numero decimal: ");
    scanf("%f", &y);
    printf("Insira um outro numero decimal: ");
    scanf("%f", &z);

    printf("Menor = %f\n", smallestFloat(x, y, z));

    return 0;
}

float smallestFloat(float x, float y, float z) {
    float smaller;

    smaller = x;  // apenas assumindo que o menor esteja em "a".
    if (y < smaller) { smaller = y; }

    if (z < smaller) { smaller = z; }

    return smaller;
}
