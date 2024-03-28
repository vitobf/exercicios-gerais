#include "matrix_utils.h"
#include <stdio.h>

void matrix_read(int rows, int cols, int matrix[rows][cols])
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void matrix_print(int rows, int cols, int matrix[rows][cols])
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int possible_matrix_sum(int rows1, int cols1, int rows2, int cols2)
{
    return rows1 == rows2 && cols1 == cols2;
}

int possible_matrix_sub(int rows1, int cols1, int rows2, int cols2)
{
    return rows1 == rows2 && cols1 == cols2;
}

int possible_matrix_multiply(int cols1, int rows2)
{
    return cols1 == rows2;
}

void matrix_add(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1])
{
    int i, j;
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void matrix_sub(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1])
{
    int i, j;
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void matrix_multiply(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2])
{
    int i, j, k, sum;
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            for (k = 0; k < rows2; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}


void transpose_matrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]) 
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            result[i][j] = matrix[i][j];
        }
    }
}

void scalar_multiply(int rows, int cols, int matrix[rows][cols], int scalar)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            matrix[i][j] = matrix[i][j] * scalar;
        }
    }
}