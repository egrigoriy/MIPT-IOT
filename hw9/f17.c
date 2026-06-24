// Составить функцию которая находит след матрицы в двумерном массиве.
// Показать пример ее работы на матрице из 5 на 5 элементов.
// След матрицы - это сумма элементов на главной диагонали.

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int trace(int size, int a[size * size]);
void print_matrix(int size, int a[size][size]);

void input(int size, int *arr)
{
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main(void)
{
    const int size = 5;
    int arr[25] = {0};
    input(25, arr);
    printf("%d", trace(5, arr));
    return EXIT_SUCCESS;
}

int trace(int size, int a[size])
{
    int trace = 0;
    for (size_t i = 0; i < size; i++)
    {
        trace += a[i * 6];
    }
    return trace;
}

void print_matrix(int size, int a[size][size])
{
    for (size_t row = 0; row < size; row++)
    {
        for (size_t col = 0; col < size; col++)
        {
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }
}