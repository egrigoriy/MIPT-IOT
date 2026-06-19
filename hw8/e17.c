// Дан массив из 10 элементов. В массиве найти элементы, которые в нем встречаются только один раз, и вывести их на экран.

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

#define SIZE 10
#define SENTINEL INT32_MIN

void input(int *, int);
void print(int *, int);

void select(int *, int, int *);
int frequency(int *, int, int);

int main(int argc, char const *argv[])
{
    int arr[SIZE] = {0};
    int selected_arr[SIZE] = {[0 ... SIZE - 1] = SENTINEL};
    input(arr, SIZE);
    select(arr, SIZE, selected_arr);
    print(selected_arr, SIZE);
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
        if (arr[i] == SENTINEL)
            break;
        printf("%d ", arr[i]);
    }
}

void select(int *arr, int size, int *selected_arr)
{
    int selected_index = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (frequency(arr, size, arr[i]) == 1)
        {
            selected_arr[selected_index] = arr[i];
            selected_index++;
        }
    }
}

int frequency(int *arr, int size, int n)
{
    int count = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            count++;
        }
    }
    return count;
}
