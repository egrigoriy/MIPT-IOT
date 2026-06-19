// Считать массив из 10 элементов и отсортировать его по последней цифре.

#include <stdio.h>
#include <inttypes.h>
#define SIZE 10

void input(int *, int);
void print(int *, int);
void sort_by_last_digit(int *, int);

int main(int argc, char const *argv[])
{
    int arr[SIZE];
    input(arr, SIZE);
    sort_by_last_digit(arr, SIZE);
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

void sort_by_last_digit(int *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            if (arr[i]  % 10 > arr[j] % 10)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}