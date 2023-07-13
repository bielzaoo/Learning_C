#include <stdio.h>

int main(){
    int num1, num2;
    int soma, subtracao, multiplicacao, divisao, modulo;

    printf("Insira um número interio: \n");
    scanf("%d", &num1);

    printf("Insira um número interio: \n");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    modulo = num1 % num2;

    printf("soma = %d\n", soma);
    printf("subtracao = %d\n", subtracao);
    printf("multiplicacao = %d\n", multiplicacao);
    printf("divisao = %d\n", divisao);
    printf("modulo = %d\n", modulo);

    return 0;
}
