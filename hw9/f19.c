// Определить количество положительных элементов квадратной матрицы,
// превышающих по величине среднее арифметическое всех элементов главной диагонали.
// Реализовать функцию среднее арифметическое главной диагонали.

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define SIZE 5

int trace(int size, int a[size][size]);
float trace_avg(int size, int a[size][size]);
int count_bigger_than_trace_average(int size, int arr[size][size], float trace_avg);

void input(int size, int arr[size][size])
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

int main(void)
{
    int arr[SIZE][SIZE] = {0};
    input(SIZE, arr);
    float trace_avg = ((float)trace(SIZE, arr)) / SIZE;
    printf("%d", count_bigger_than_trace_average(SIZE, arr, trace_avg));
    return EXIT_SUCCESS;
}

float trace_avg(int size, int a[size][size])
{
    return ((float)trace(size, a)) / size;
}

int trace(int size, int a[size][size])
{
    int trace = 0;
    for (size_t i = 0; i < size; i++)
    {
        trace += a[i][i];
    }
    return trace;
}

int count_bigger_than_trace_average(int size, int arr[size][size], float trace_avg)
{
    int count = 0;
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            if (arr[i][j] > trace_avg)
            {
                count++;
            }
        }
    }
    return count;
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