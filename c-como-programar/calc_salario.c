#include <stdio.h>

int main(void) {
    int horas_trabalhadas;
    float preco_hora;
    float salario;
    int horas_extras;

    printf("Informe a quantidade de horas trabalhadas(-1 para finalizar): ");
    scanf("%d", &horas_trabalhadas);
    printf("Informe o preõ por hora trabalhada: ");
    scanf("%d", &preco_hora);

    while (horas_trabalhadas != -1) {
        if (horas_trabalhadas > 40) {
            horas_extras = horas_trabalhadas - 40;
            salario = preco_hora * 40;
            salario += ((preco_hora + preco_hora / 2) * horas_extras);
        }
        salario = preco_hora * (float)horas_trabalhadas;
        printf("Salário é de: R$ %f \n\n", salario);

        printf("Informe a quantidade de horas trabalhadas(-1 para finalizar): ");
        scanf("%d", &horas_trabalhadas);
        printf("Informe o preõ por hora trabalhada: ");
        scanf("%d", &preco_hora);
    }
}
