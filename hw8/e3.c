// Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их номера.

#include <stdio.h>
#include <inttypes.h>

struct ArrayElement
{
    unsigned index;
    int value;
};

void input(int *, int);
struct ArrayElement max(int *, int);
struct ArrayElement min(int *, int);

int main(int argc, char const *argv[])
{
    const int SIZE = 10;
    int arr[SIZE];
    input(arr, SIZE);
    struct ArrayElement max_found = max(arr, SIZE);
    struct ArrayElement min_found = min(arr, SIZE);
    printf("%d %d %d %d", max_found.index, max_found.value, min_found.index, min_found.value);
    return 0;
}

void input(int *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

struct ArrayElement min(int *arr, int size)
{
    int min = INT32_MAX;
    int min_index = -1;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }
    return (struct ArrayElement){min_index + 1, min};
}

struct ArrayElement max(int *arr, int size)
{
    int max = INT32_MIN;
    int max_index = -1;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    return (struct ArrayElement){max_index + 1, max};
}