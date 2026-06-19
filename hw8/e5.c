// Считать массив из 10 элементов и посчитать сумму положительных элементов массива.

#include <stdio.h>
#include <inttypes.h>

void input(int *, int);
int sum_positives(int *, int);

int main(int argc, char const *argv[])
{
    const int SIZE = 10;
    int arr[SIZE];
    input(arr, SIZE);
    printf("%d", sum_positives(arr, SIZE));
    return 0;
}

void input(int *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int sum_positives(int *arr, int size)
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}