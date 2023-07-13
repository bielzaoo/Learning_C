#include <stdio.h>

int main(void) {
    float salary;
    int code;
    int overtime;
    int worrked_hours;
    float weekly_sales;
    int qt_items_sold;
    float value_per_item;
    float value_hour;
    int item_type;
    float overtime_value;

    printf("Insira o codigo (-1 para encerrar): ");
    scanf("%d", &code);
    while (code != -1) {
        switch (code) {
            case 1:
                printf("Insira o pagamento semanal do gerente: ");
                scanf("%f", &salary);
                printf("\n$ > Salario do gerente: = R$ %f\n", salary);

                break;

            case 2:
                printf("Insira quantidade de horas trabalhadas: ");
                scanf("%d", &worrked_hours);
                printf("Insira o Salario por hora: ");
                scanf("%f", &value_hour);

                if (worrked_hours > 40) {
                    overtime = worrked_hours - 40;
                    overtime_value = (value_hour + value_hour / 2) * overtime;
                    salary = (worrked_hours * value_hour) + overtime_value;
                    printf("+ > Valor horas extras incluso: %f\n", overtime_value);
                    printf("\n$ > Salario do funcionário: = R$ %f\n", salary);
                }

                salary = worrked_hours * value_hour;
                printf("$ > Salario do funcionário: = R$ %f\n", salary);

                break;

            case 3:
                printf("Insria  valor da venda semanal: \n");
                scanf("%f", &weekly_sales);
                salary = 250 + (weekly_sales * 0.057);
                printf("\n$ > Salario do funcionário: = R$ %f\n", salary);
                break;

            case 4:
                printf("Tipo do item prooduzido: ");
                scanf("%s", &item_type);
                printf("Insira valor por item: ");
                scanf("%f", &value_per_item);
                printf("Insira a quantidade de itens vendidos: ");
                scanf("%d", &qt_items_sold);

                salary = value_per_item * qt_items_sold;
                printf("\n$ > Salario do funcionário: = R$ %f\n", salary);

                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                printf("!!! > Código incorreto, digite novamente!\n");
                break;
        }
        printf("\nInsira o codigo (-1 para encerrar): ");
        scanf("%d", &code);
    }

    return 0;
}
