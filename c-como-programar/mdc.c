#include <stdio.h>

int mdc(int num1, int num2, int num3);

int main(void) {
    int num1, num2, num3;

    printf("Insira um numero: ");
    scanf("%d", &num1);

    printf("Insira outro numero: ");
    scanf("%d", &num2);

    printf("Insira um outro numero: ");
    scanf("%d", &num3);

    printf("mdc(%d,%d,%d) = %d\n", num1, num2, num3, mdc(num1, num2, num3));

    return 0;
}

int mdc(int num1, int num2, int num3) {
    int count = 2;  // se  for 1 vai dar loop infinito.
    int divisor = 1;

    if (num3 == 0) {
        while ((count < num1) || (count < num2)) {
            if ((num1 % count == 0) && (num2 % count == 0)) {
                num1 /= count;
                num2 /= count;
                divisor *= count;
                continue;
            } else {
                count++;
            }  //end else
        }      // end while

        return divisor;
    }  // end if
    else {
        while ((count < num1) || (count < num2) || (count < num3)) {
            if ((num1 % count == 0) && (num2 % count == 0) && (num3 % count == 0)) {
                num1 /= count;
                num2 /= count;
                num3 /= count;
                divisor *= count;
                continue;
            } else {
                count++;
            }  //end else
        }      // end while

        return divisor;
    }  // end else
}
