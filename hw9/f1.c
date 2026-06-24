// Написать только одну функцию, которая сортирует массив по возрастанию.
// Необходимо реализовать только одну функцию, всю программу составлять не надо.
// Строго согласно прототипу. Имя функции и все аргументы должны быть: void sort_array(int size, int a[]).

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void sort_array(int size, int a[]);

void input(int *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print(int *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    int *arr;
    input(arr, 5);
    sort_array(5, arr);
    print(arr, 5);
    return EXIT_SUCCESS;
}

void sort_array(int size, int a[])
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}