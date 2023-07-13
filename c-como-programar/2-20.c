#include <stdio.h>

int main(void){
    int raio;

    printf("Informe o raio do circulo: ");
    scanf("%d", &raio);

    printf("Área: %f\n", 3.14159*(raio*raio));
    printf("Diâmetro: %d\n", raio*2 );
    printf("Circunferência: %f\n", 2*3.14159*raio);

    return 0;
}
