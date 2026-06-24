// Составить только функцию которая в массиве находит максимальный из отрицательных элементов и меняет его местами с последним элементом массива.
// Гарантируется, что в массиве только один такой элемент или же такой элемент отсутствует.
// Если отрицательных элементов нет - массив не менять.
// Прототип функции: void swap_negmax_last(int size, int a[])

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void swap_negmax_last(int size, int a[]);

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
    int a[SIZE] = {0};
    input(SIZE, a);
    swap_negmax_last(SIZE, a);
    print(SIZE, a);
    return EXIT_SUCCESS;
}

void swap_negmax_last(int size, int a[])
{
    int negmax_index = -1;
    for (size_t i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            if (negmax_index == -1)
                negmax_index = i;
            if (a[i] > a[negmax_index])
                negmax_index = i;
        }
    }
    if (negmax_index != -1)
    {
        int temp = a[size - 1];
        a[size - 1] = a[negmax_index];
        a[negmax_index] = temp;
    }
}