// Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.

#include <stdio.h>
#include <inttypes.h>

void input(int*, int);
int min(int*, int);

int main(int argc, char const *argv[])
{
    const int size = 5;
    int arr[size];
    input(arr, size);
    printf("%d", min(arr, size));
    return 0;
}

void input(int *arr, int size) {
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int min(int *arr, int size) {
    int min = INT32_MAX;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}