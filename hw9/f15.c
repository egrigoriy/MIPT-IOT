// Составить функцию которая определяет в массиве, состоящем из положительных и отрицательных чисел,
// сколько элементов превосходят по модулю максимальный элемент.
// Прототип функции int count_bigger_abs(int n, int a[]);

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void input(int size, int *arr)
{
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print(int size, int *arr)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    unsigned long n;
    scanf("%d", &n);

    return EXIT_SUCCESS;
}

int count_bigger_abs(int n, int a[])
{
    int max = a[0];
    for (size_t i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    int count = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (abs(a[i]) > max)
            count++;
    }
    return count;
}