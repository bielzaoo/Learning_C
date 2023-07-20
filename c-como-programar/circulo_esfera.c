#include <stdio.h>
#define PI 3.14

void area(double raio);
void circunferencia(double raio);
void volumeEsfera(double raio);

int main(void){
    void (*operacaoo[3])(double raio) = {area, circunferencia, volumeEsfera}; 
    double raio;
    int opcao;

    printf("0 - Calcular área\n");
    printf("1 - Calcular circunferência\n");
    printf("2 - Calcular volume da esfera\n");

    printf("\nEscolha aopção: ");
    scanf("%d", &opcao);

    while (opcao != 3)
    {
        printf("\n\nInforme o raio: ");
        scanf("%lf", &raio);

        (operacaoo[opcao])(raio); // chama a função escolhida pelo user


        printf("\n0 - Calcular área\n");
        printf("1 - Calcular circunferência\n");
        printf("2 - Calcular volume da esfera\n");

        printf("\nEscolha aopção: ");
        scanf("%d", &opcao);

    }
    
    return 0;
}

void area(double raio){
    double a; // areae
    a = PI *(raio*raio);

    printf("\n====== Area =======\n");
    printf("Raio: %.2f\n", raio);
    printf("Area: %.2f", a);
    printf("\n===================\n");
    
}

void circunferencia(double raio){
    double cf; // circunferenncia;
    cf = 2 * PI * raio;

    printf("\n====== Circunferencia =======\n");
    printf("Raio: %.2f\n", raio);
    printf("Circunferencia: %.2f", cf);
    printf("\n=============================\n");
    
}

void volumeEsfera(double raio){
    double v; // volume
    v = (4 * PI * (raio * raio * raio)) / 3;

    printf("\n====== Volume =======\n");
    printf("Raio: %.2f\n", raio);
    printf("Volume: %.2f", v);
    printf("\n===================\n");

}