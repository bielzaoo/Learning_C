#include <stdio.h>

int qualityPoints(int media);

int main(void) {
    int media;

    printf("Isnira a media d aluno: ");
    scanf("%d", &media);

    if (qualityPoints(media) == 0) {
        printf("Menor que 60\n");
    } else {
        printf("Passou\n");
    }

    return 0;
}

int qualityPoints(int media) {
    if (media >= 90 && media <= 100) {
        return 4;
    } else if (media >= 80 && media <= 89) {
        return 3;
    } else if (media >= 70 && media <= 79) {
        return 2;
    } else if (media >= 60 && media <= 69) {
        return 1;
    } else if (media < 60) {
        return 0;
    } else {
        return -1;
    }
}
