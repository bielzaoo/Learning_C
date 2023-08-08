#include <stdio.h>
#define OPERATIONS 4

void somar(double num1, double num2);
void subtrair(double num1, double num2);
void dividir(double num1, double num2);
void multiplicar(double num1, double num2);

int main(void){
    void (*operacoes[OPERATIONS])(double , double ) = {somar, subtrair, multiplicar, dividir};
    double num1, num2;
    int option;

    printf("0 - para somar\n");
    printf("1 - para subtrair\n");
    printf("2 - para multiplicar\n");
    printf("3 - para dividir\n");
    printf("4 - para sair\n");

    printf("Escolha uma opção: ");
    scanf("%d", &option);

    printf("\n\nInsiria um número: ");
    scanf("%lf", &num1);

    printf("\nInsiria outro número: ");
    scanf("%lf", &num2);

    while (option != 4)
    {
        (operacoes[option])(num1, num2);

        printf("0 - para somar\n");
        printf("1 - para subtrair\n");
        printf("2 - para multiplicar\n");
        printf("3 - para dividir\n");
        printf("4 - para sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &option);

        printf("\n\nInsiria um número: ");
        scanf("%lf", &num1);

        printf("\nInsiria outro número: ");
        scanf("%lf", &num2);
    }
    

    return 0;
}

void somar(double num1, double num2){
    double soma;

    soma = num1 + num2;
    printf("\n\n===== Somar =====\n");
    printf("Primeiro valor: %f\n", num1);
    printf("Segundo valor: %f\n", num2);
    printf("%f + %f = %f\n", num1, num2, soma);
    printf("===============\n\n");

}

void subtrair(double num1, double num2){
    double sub;

    sub = num1 - num2;

    printf("\n\n===== Subtrair =====\n");
    printf("Primeiro valor: %f\n", num1);
    printf("Segundo valor: %f\n", num2);
    printf("%f - %f = %f\n", num1, num2, sub);
    printf("====================\n\n");

}

void dividir(double num1, double num2){
    double div;

    div = num1 / num2;

    printf("\n\n===== Dividir =====\n");
    printf("Primeiro valor: %f\n", num1);
    printf("Segundo valor: %f\n", num2);
    printf("%f / %f = %f\n", num1, num2, div);
    printf("===================\n");

}

void multiplicar(double num1, double num2){
    double mult;

    mult = num1 * num2;

    printf("\n\n===== Multiplicar =====\n");
    printf("Primeiro valor: %f\n", num1);
    printf("Segundo valor: %f\n", num2);
    printf("%f x %f = %f\n", num1, num2, mult);
    printf("=======================\n\n");

}

