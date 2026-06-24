// Написать только одну функцию, которая находит максимальный элемент в массиве. Всю программу загружать не надо.
// Прототип функции: int find_max_array(int size, int a[])

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int find_max_array(int size, int a[]);

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
    print_digits_frequency(n);
    return EXIT_SUCCESS;
}

int find_max_array(int size, int a[]) {
    int max = INT32_MIN;
    for (size_t i = 0; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}