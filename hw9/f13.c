// Составить функцию которая возвращает количество элементов на заданном отрезке [from, to] для массива.
// Прототип функции int count_between(int from, int to, int size, int a[])

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int count_between(int from, int to, int size, int a[]);

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
    int a, b, size, *arr;
    scanf("%d", &n);

    return EXIT_SUCCESS;
}

int count_between(int from, int to, int size, int a[])
{
    int count = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (a[i] >= from && a[i] <= to)
            count++;
    }
    return count;
}