// Считать массив из 10 элементов и выполнить циклический сдвиг ВПРАВО на 1.

#include <stdio.h>
#include <inttypes.h>

#define SIZE 10

void input(int *, int);
void print(int *, int);

int shift_right(int *, int, int);

int main(int argc, char const *argv[])
{
    int arr[SIZE];
    input(arr, SIZE);
    shift_right(arr, SIZE, 1);
    print(arr, SIZE);
    return 0;
}

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

int shift_right(int *arr, int size, int shift)
{
    int buffer[shift];
    int target_index;

    for (int i = size - 1; i >= 0; i--)
    {
        target_index = (i + shift) % size;
        if (target_index > i)
        {
            arr[target_index] = arr[i];
        }
        else
        {
            buffer[target_index] = arr[i];
        }
    }
    for (size_t i = 0; i < shift; i++)
    {
        arr[i] = buffer[i];
    }
}