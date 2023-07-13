#include <stdio.h>

int main(void){
    int num1, num2, num3;
    int soma, media, produto;
    int maior = 0, menor;

    printf("Informe três números inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    soma = num1 + num2 + num3;
    media = (num1 + num2 + num3) / 3;
    produto = num1 * num2 * num3;

    if (num1 < num2 && num1 < num3)
        menor = num1;

    if (num2 < num1 && num2 < num3)
        menor = num2;

    if (num3 < num1 && num3 < num2)
        menor = num3;

    if (num1 > num2 && num1 > num3)
        maior = num1;

    if (num2 > num1 && num2 > num3)
        maior = num2;

    if (num3 > num1 && num3 > num2)
        maior = num3;

    printf("A soma: %d\n", soma);
    printf("A média é: %d\n", media);
    printf("O produto é? %d\n",produto);
    printf("O menor: %d\n", menor);
    printf("O maior: %d\n", maior);

    return 0;
}
