#include <stdio.h>

int main(void) {
    int count;
    int num;
    float media;
    int soma = 0;  // soma geral para realizar a media.

    printf("Insira um inteiroo: ");
    scanf("%d", &num);

    while (num != 9999) {
        soma += num;
        count++;

        printf("Insira um inteiroo: ");
        scanf("%d", &num);
    }

    media = (float) soma / count;  // conversão apra gerar um resultado foat.

    printf("media = %f\n", media);

    return 0;
}
