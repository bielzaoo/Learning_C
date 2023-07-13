#include <stdio.h>

int main(void) {
    float vendas;
    float pagamento;

    printf("Informe a venda em reais: ");
    scanf("%f", &vendas);

    while (vendas != -1) {
        pagamento = 200 + (vendas * 0.09);
        printf("O pagamento é de: %f\n", pagamento);

        printf("Informe a venda em reais: ");
        scanf("%f", &vendas);
    }

    return 0;
}
