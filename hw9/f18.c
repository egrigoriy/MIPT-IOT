// Дана целочисленная квадратная матрица 10 х 10. реализовать алгоритм вычисления суммы максимальных элементов из каждой строки.
// Напечатать значение этой суммы.
// Предполагается, что в каждой строке такой элемент единственный. Реализовать функцию поиска максимума в строке из 10 элементов

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define SIZE 10

void print_matrix(int size, int a[size][size]);
int sum_of_max(int size, int a[size][size]);
int max_in_row(int size, int a[size]);

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
    printf("%d", sum_of_max(SIZE, arr));
    return EXIT_SUCCESS;
}

int sum_of_max(int size, int a[size][size])
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += max_in_row(size, a[i]);
    }
    return sum;
}

int max_in_row(int size, int a[size])
{
    int max = a[0];
    for (size_t i = 1; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
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