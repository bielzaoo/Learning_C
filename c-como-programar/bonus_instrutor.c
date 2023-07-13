#include <stdio.h>

int main(void) {
    int alunos = 1;
    int aprovados = 0;
    int reprovados = 0;
    int resultado;

    while (alunos <= 10) {
        printf("Digite o ressultado: \n");
        scanf("%d", &resultado);

        if (resultado == 1) {
            aprovados++;
        } else {
            reprovados++;
        }

        alunos++;
    }

    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    if (aprovados > 8) {
        printf(
            "BÔNUS PARA O INSTRUTOR"
            "\n");
    }

    return 0;
}
