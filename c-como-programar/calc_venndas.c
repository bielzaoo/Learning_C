#include <stdio.h>

int main(void) {
    int num;
    int qtd_vendas;
    float valor1, valor2, valor3, valor4, valor5;

    for (int i = 0; i < 5; i++) {
        printf("Insira o número do produto: ");
        scanf("%d", &num);

        printf("Quantidade de venda dete produto (no dia): ");
        scanf("%d", &qtd_vendas);

        switch (num) {
            case 1:
                valor1 = qtd_vendas * 2.98;
                break;
            case 2:
                valor2 = qtd_vendas * 4.50;
                break;
            case 3:
                valor3 = qtd_vendas * 9.98;
                break;
            case 4:
                valor4 = qtd_vendas * 4.49;
                break;
            case 5:
                valor5 = qtd_vendas * 6.87;
                break;
            default:
                printf("Múmero incorreto.\n");
                break;
        }  // end switch
    }      // end for

    printf("Produto 1 = R$ %.2f\n", valor1);
    printf("Produto 2 = R$ %.2f\n", valor2);
    printf("Produto 3 = R$ %.2f\n", valor3);
    printf("Produto 4 = R$ %.2f\n", valor4);
    printf("Produto 5 = R$ %.2f\n", valor5);
    return 0;
}
