#include <stdio.h>
#include "matrix_utils.h"

int main()
{
#pragma region Declarando variáveis e lendo matrizes. Inicializando matrizes "result".

    int escolha;
    int rows1, rows2;
    int cols1, cols2;
    int i, j;
    int scalar, chosenMatrix;

    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];
    matrix_read(rows1, cols1, matrix1);

    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];
    matrix_read(rows2, cols2, matrix2);

    int result[rows1][cols1];
    int resultMultiplicacao[rows1][cols2];

#pragma endregion

#pragma region Escolhas e operações
    while (1)
    {
        printf("1 - Somar matrizes \n");
        printf("2 - Subtrair matrizes\n");
        printf("3 - Multiplicar matrizes\n");
        printf("4 - Multiplicacao de uma matriz por escalar\n");
        printf("5 - Transposta de uma matriz\n");
        printf("6 - Encerrar o programa\nOpcao escolhida:\n");
        scanf("%d", &escolha);
        if (escolha == 1)
        {
            if (possible_matrix_sum(rows1, cols1, rows2, cols2))
            {
                matrix_add(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                matrix_print(rows1, cols1, result);
            }
            else
            {
                printf("Erro: as dimensoes da matriz nao correspondem\n\n");
            }
        }

        else if (escolha == 2)
        {
            if (possible_matrix_sub(rows1, cols1, rows2, cols2))
            {
                matrix_sub(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                matrix_print(rows1, cols1, result);
            }
            else
            {
                printf("Erro: as dimensoes da matriz nao correspondem\n\n");
            }
        }
        else if (escolha == 3)
        {
            if (possible_matrix_multiply(cols1, rows2))
            {
                matrix_multiply(rows1, cols1, matrix1, rows2, cols2, matrix2, resultMultiplicacao);
                matrix_print(rows1, cols2, resultMultiplicacao);
            }
            else
            {
                printf("Erro: o numero de colunas da primeira matriz eh diferente do numero de linhas da segunda matriz\n\n");
            }
        }
        else if (escolha == 4)
        {
            scanf("%d %d", &scalar, &chosenMatrix);
            if (chosenMatrix == 1)
            {
                scalar_multiply(rows1, cols1, matrix1, scalar);
                matrix_print(rows1, cols1, matrix1);
            }
            else if (chosenMatrix == 2)
            {
                scalar_multiply(rows2, cols2, matrix2, scalar);
                matrix_print(rows2, cols2, matrix2);
            }
            else
            {
                printf("Seleção de matriz inválida.\n");
            }
        }
        else if (escolha == 5)
        {
            transpose_matrix(rows1, cols1, matrix1, result);
            matrix_print(cols1, rows1, result);
            transpose_matrix(rows2, cols2, matrix2, result);
            matrix_print(cols2, rows2, result);
        }
        else if (escolha == 6)
        {
            return 0;
        }
        else
        {
            printf("Opcao invalida\n");
        }
    }
#pragma endregion
}