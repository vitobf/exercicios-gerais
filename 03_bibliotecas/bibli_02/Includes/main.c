#include <stdio.h>
#include "matrix_utils.h"

int main()
{
#pragma region Declarando variáveis e lendo matrizes. Inicializando matriz "result".

    int escolha;
    int rows1, rows2;
    int cols1, cols2;
    int i, j;

    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];
    matrix_read(rows1, cols1, matrix1);

    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];
    matrix_read(rows2, cols2, matrix2);

    int result1[rows1][cols1];
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            result1[i][j] = 0;
        }
    }

    int result2[rows2][cols2];
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            result2[i][j] = 0;
        }
    }

#pragma endregion

#pragma region Escolhas e operações
    printf("1 - Somar Matrizes \n");
    printf("2 - Subtrair Matrizes\n");
    printf("3 - Multiplicar Matrizes\n");
    printf("4 - Multiplicação de uma matriz por escalar\n");
    printf("5 - Transposta de uma matriz\n");
    printf("6 - Encerrar o programa\nOpção escolhida:\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:

        break;
    case 2:

        break;
    case 3:

        break;
    case 4:

        break;
    case 5:

        break;
    case 6:
        return 0;
        break;
    default:
        printf("Opção inválida, encerrando o programa...");
        return 0;
        break;
    }
#pragma endregion
}