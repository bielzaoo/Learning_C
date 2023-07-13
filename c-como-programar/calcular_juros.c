#include <stdio.h>

int main(void) {
    int dias;
    float taxa, principal;
    float juros;  // juros = principal * taxa * dias / 365;

    printf("nforme o valor principal: ");
    scanf("%f", &principal);

    while (principal != -1) {
        printf("Informe a taxa de juros: ");
        scanf("%f", &taxa);

        printf("Informe o prazo do emprestimo em dias: ");
        scanf("%d", &dias);

        juros = principal * taxa * (float)dias / 365;
        printf("O valor do juros é: R$ %.2f\n\n", juros);

        printf("nforme o valor principal: ");
        scanf("%f", &principal);
    }

    return 0;
}
