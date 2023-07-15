#include <stdio.h>
#define PRODUCTS 6  // produtos vao de 1 a 5
#define SELLERS 5   // vendedores vao de 1 a 4

void fillInSales(float sales[][PRODUCTS], int sellers, int products);
void showInf(const float sales[][PRODUCTS], int sellers, int products);
void test(float sales[][PRODUCTS], int sellers, int products);

/*
 * Trocar para float variaveis que lidam com valores R$, trocar os format tbm.
 *
 *  TERMINAR DE COMENTAR O CODIGO
 * */

int main(void) {
    float sales[SELLERS][PRODUCTS] = {0};

//    fillInSales(sales, SELLERS, PRODUCTS);
    test(sales, SELLERS, PRODUCTS);
    showInf(sales, SELLERS, PRODUCTS);
    return 0;
}

/* Esta função pede as informações ao usuario e preencghe o array.*/
void fillInSales(float sales[][PRODUCTS], int sellers, int products) {
    int i, j;

    for (i = 1; i < sellers; ++i) {
        for (j = 1; j < products; ++j) {
            printf("Vendedor[%d] / Produto[%d] - Insira as vendas: ", i, j);
            scanf("%f", &sales[i][j]);
        }  // end internal for
    }      // end external for

}  // end fillInSales function

/* Essa função foi criada e usada apenas para preencgher os valores coom valores tesetes.*/
void test(float sales[][PRODUCTS], int sellers, int products) {
    int i, j;

    // inserindo valroes R$ para cada produto
    for (i = 1; i < sellers; ++i) {
        for (j = 1; j < products; ++j) { sales[i][j] = i; }  // end internal for
    }                                                        // end external for
}  // end test function

/* Essa fução calcula o valor total R$ de vendas por vendedor e por produto e imprime. */
void showInf(const float sales[][PRODUCTS], int sellers, int products) {
    int i, j;                             // contatdors para imprimir os valroes de cada produto.
    int k;                                // contador para imprimir total de cada produto.
    float productsTotal[PRODUCTS] = {0};    // contabiliza o total de cada produto.
    float sellersProdTotal[SELLERS] = {0};  // conabiliza o total por vendedor.
    float totalValueOfEverything = 0;  // valor total de tudo.

    printf("\n\t  ");
    for (i = 1; i < sellers; ++i) { printf("\tVendedor[%d]  ", i); }
    printf("Total p/ produto(R$)\n");

    // imprime valores formato tabular
    for (i = 1; i < products; ++i) {
        printf("Prod.[%d] R$ \t", i);
        for (j = 1; j < sellers; ++j) {
            printf("   %.2f\t\t", sales[j][i]);

            // contabiliza o valor total de cada produto vendido no geral.
            productsTotal[i] += sales[j][i];

            if (j == 4) {
                printf("%.2f", productsTotal[i]);
                printf("\n");
            }  // end if
        }      // end internal for
    }          // end external for

    // faz o calculo do valor total por vendedor
    for (i = 1; i < sellers; ++i) {
        for (j = 1; j < products; ++j) { sellersProdTotal[i] += sales[i][j]; }
    }

    printf("------------------------------------------------------------------------------\n");
    printf("Total\npor\nvendedor. R$:    ");

    // imprime total por vendedor
    for (i = 1; i < SELLERS; ++i) { printf(" %.2f \t\t", sellersProdTotal[i]); }

    // contabiliza o valor total de produto vendidos no geral.
    for (i = 1; i < PRODUCTS; ++i) { totalValueOfEverything += productsTotal[i]; }

    printf("%.2f\n", totalValueOfEverything);

}  // end showInf function
