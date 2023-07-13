#include <stdio.h>

int main(void) {
    float km_rodados;
    float litros_abastecidos;
    float consumo_total;
    float consumo_atual;
    int qtd_consumo = 0;

    printf("Litros abastecidos(digite -1 para finalizar): ");
    scanf("%f", &litros_abastecidos);

    printf("KM rodados: ");
    scanf("%f", &km_rodados);

    while (litros_abastecidos != -1) {
        consumo_atual = km_rodados / litros_abastecidos;

        printf("Consumo atual: %f km/l\n\n", consumo_atual);

        consumo_total += consumo_atual;
        qtd_consumo++;

        printf("Litros abastecidos(digite -1 para finalizar): ");
        scanf("%f", &litros_abastecidos);

        printf("KM rodados: ");
        scanf("%f", &km_rodados);
    }

    if (qtd_consumo > 0) {
        consumo_total /= qtd_consumo;
        printf("Consumo total: %f km/l\n", consumo_total);
    } else {
        printf("Não há consumos.\n");
    }

    return 0;
}
