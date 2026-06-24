// Составить функцию которая меняет в массиве минимальный и максимальный элемент местами.
// Прототип функции void change_max_min(int size, int a[])

#include <stdio.h>
#include <stdlib.h>

void change_max_min(int size, int a[]);

void print(int size, int *arr)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    change_max_min(10, arr);
    print(10, arr);
    return EXIT_SUCCESS;
}

void change_max_min(int size, int a[])
{
    int max_pos = 0;
    int min_pos = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (a[i] > a[max_pos])
            max_pos = i;
        if (a[i] < a[min_pos])
            min_pos = i;
    }
    int temp = a[max_pos];
    a[max_pos] = a[min_pos];
    a[min_pos] = temp;
}