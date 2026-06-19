// читать массив из 12 элементов и выполнить инверсию для каждой трети массива.

#include <stdio.h>
#include <inttypes.h>

void input(int *, int);
void print(int *, int);

int inverse(int *, int, int);

int main(int argc, char const *argv[])
{
    const int SIZE = 12;
    int arr[SIZE];
    input(arr, SIZE);
    inverse(arr, 0, SIZE / 3 - 1);
    inverse(arr, SIZE / 3, 2 * SIZE / 3 - 1);
    inverse(arr, 2 * SIZE / 3, SIZE - 1);
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
int inverse(int *arr, int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}