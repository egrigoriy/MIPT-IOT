// Составить функцию которая возвращает сумму элементов в заданном отрезке [from, to] для массива.
// Прототип функции int sum_between_ab(int from, int to, int size, int a[])

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int sum_between_ab(int from, int to, int size, int a[]);

int main(void)
{
    int arr[10] = {89, 71, 6, 40, 61, 75, 53, 64, 79, 97};
    printf("%d", sum_between_ab(50, 60, 10, arr));
    return EXIT_SUCCESS;
}

int sum_between_ab(int from, int to, int size, int a[])
{
    int sum = 0;
    if (from > to)
    {
        int temp = to;
        to = from;
        from = temp;
    }

    for (size_t i = 0; i < size; i++)
    {
        if (a[i] >= from && a[i] <= to)
            sum += a[i];
    }
    return sum;
}