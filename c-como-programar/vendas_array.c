#include <stdio.h>
#define VENDEDORES 11

void fillInf(float vendedores[], int size);
void showInf(const float vendedores[], int size);

int main(void) {
    int i;  // contador de Vendedores
    int j;
    float vendedores[VENDEDORES] = {0};
    int contador[VENDEDORES] = {0};  // contador de salario

    fillInf(vendedores, VENDEDORES);
    showInf(vendedores, VENDEDORES);

    for (j = 1; j < VENDEDORES; ++j) {
        if (vendedores[j] >= 200 && vendedores[j] < 300) {}

        return 0;
    }

    void fillInf(float vendedores[], int size) {
        int i;
        float salario;

        for (i = 1; i < size; ++i) {
            printf("Informe a venda semanal do Vendedor [%d]: ", i);
            scanf("%f", &salario);
            vendedores[i] = 200 + (0.09 * salario);
        }
    }

    void showInf(const float vendedores[], int size) {
        int i;  // contador de  vendedores

        for (i = 1; i < size; ++i) {
            printf("\nVendedor [%d]:\n- Venda semanal: R$ %.2f", i, vendedores[i]);
        }
    }
