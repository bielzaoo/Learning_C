#include <stdio.h>

int main(void) {
    int nota;
    int aCont = 0;
    int bCont = 0;
    int cCont = 0;
    int dCont = 0;
    int fCont = 0;

    int isA = (nota != 'A' && nota != 'a');
    int isB = (nota != 'B' && nota != 'b');
    int isC = (nota != 'C' && nota != 'c');
    int isD = (nota != 'D' && nota != 'd');
    int isF = (nota != 'F' && nota != 'f');
    int isNotLetter = (nota != '\n' && nota != '\t' && nota != ' ');

    printf("Digite as notas em letra.\n");
    printf("Digite o caractere EOF para encerrar a entrada.\n");

    while ((nota = getchar()) != EOF) {
        if (nota == 'A' || nota == 'a') { aCont++; }
        if (nota == 'B' || nota == 'b') { bCont++; }
        if (nota == 'C' || nota == 'c') { cCont++; }
        if (nota == 'D' || nota == 'd') { dCont++; }
        if (nota == 'F' || nota == 'f') { fCont++; }
        if (nota == '\n' || nota == '\t' || nota == ' ') { continue; }
        if (isA && isB && isC && isD && isF && isNotLetter) {
            printf("Nota inváldia! Digite nova nota.\n");
        }
    }
    printf("Totais para cada nota são: \n");
    printf("A = %d\n", aCont);
    printf("B = %d\n", bCont);
    printf("C = %d\n", cCont);
    printf("D = %d\n", dCont);
    printf("F = %d\n", fCont);

    return 0;
}
