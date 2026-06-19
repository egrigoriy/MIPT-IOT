// Считать массив из 10 элементов и найти в нем два максимальных элемента и напечатать их сумму.

#include <stdio.h>
#include <inttypes.h>

void input(int *, int);
void sort_by_last_digit(int *, int);

int main(int argc, char const *argv[])
{
    const int SIZE = 10;
    int arr[SIZE];
    input(arr, SIZE);
    sort_by_last_digit(arr, SIZE);
    printf("%d", arr[0] + arr[1]);
    return 0;
}

void input(int *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void sort_by_last_digit(int *arr, int size) {
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
}