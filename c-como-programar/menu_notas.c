#include <stdio.h>
#define ALUNOS 3
#define EXAMES 4

void mostrarNotas(const int notas[][EXAMES], int alunos, int exames);
void menor(const int notas[][EXAMES], int alunos, int exames);
void maior(const int notas[][EXAMES], int alunos, int exames);
void media(const int notas[][EXAMES], int alunos, int exames);

int main(void){
    void (*funcoes[4])(const int notas[][EXAMES], int, int) = {mostrarNotas, 
    menor, maior, media}; // ponteiros para as funções;
    int option;    
    int notas[ALUNOS][EXAMES] = { { 77, 68, 86, 73 },
                                  { 96, 87, 89, 78 }, 
                                  { 70, 90, 86, 81 } };

    printf("0 - Imprime array de notas\n");
    printf("1 - Acha a menor nota\n");
    printf("2 - Acha a maior nota\n");
    printf("3 - Imprime a média de todos os testes para cada aluno\n");
    printf("4 - Encerra o programa\n");
    printf("Escolha uma opção: ");
    scanf("%d", &option);


    while (option != 4){
        (funcoes[option])(notas, ALUNOS, EXAMES); // chama a função conforme escolhida pelo user.
        printf("0 - Imprime array de notas\n");
        printf("1 - Acha a menor nota\n");
        printf("2 - Acha a maior nota\n");
        printf("3 - Imprime a média de todos os testes para cada aluno\n");
        printf("4 - Encerra o programa\n");        
        printf("Escolha uma opção: ");
        scanf("%d", &option);
    }
 
    return 0;
}

/* Função para mostrar as notas */
void mostrarNotas(const int notas[][EXAMES], int alunos, int exames){
    int line; // contador para mostrar linhas
    int column; // contador para msotrar as ntoas.

    printf("=================================\n");
    for(line = 0; line < alunos; line++){
        printf("Aluno[%d]: ", line);

        for(column = 0; column < exames; column++){
            printf("%d ", notas[line][column]);
        } // end for interno
        
        printf("\n");
    } // end for externo
    printf("=================================\n\n");

}

/* Função para achar a menor nota */
void menor(const int notas[][EXAMES], int alunos, int exames){
    int line;
    int column;
    int menorNota = 100;

    for (line = 0; line < alunos; line++)
    {
        for (column = 0; column < exames; column++)
        { 
            if (notas[line][column] < menorNota)
            { // se a nota atual no loop for menor que a menor ntoa, ela passa ser a menor.
                menorNota = notas[line][column];
            } // end if
            
        } // end internal for
       
    } // end external for

    printf("\nMenor nota: %d\n\n", menorNota);
    
}

/* função para char a mairo nota */
void maior(const int notas[][EXAMES], int alunos, int exames){
    int line;
    int column;
    int maiorNota = 0;

    for(line = 0; line < alunos; line++){
        for(column = 0; column < exames; column++){
            if (notas[line][column] > maiorNota)
            { // se a nota atual no loop for maior que a maior ntoa, ela passa ser a maior.
                maiorNota = notas[line][column];
            } // end if
        } // end for interno
    } // end for externo

    printf("\nMaioir nota: %d\n\n", maiorNota);

}

/* Função para achar a media das notas de um aluno. */
void media(const int notas[][EXAMES], int alunos, int exames){
    int line;
    int column;
    float total = 0;

    printf("\n=================================");
    for(line = 0; line < alunos; line++){
        printf("\nMedia do aluno[%d]: ", line);

        for(column = 0; column < exames; column++){
            total += notas[line][column];
        } // end for interno

        printf("%.2f\n", total/exames); // calcula a media das notas e imprime. 
    } // end for externo
    printf("=================================\n\n");

}
