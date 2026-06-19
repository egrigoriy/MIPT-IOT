// Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего. Гарантируется, что такое число ровно 1.
#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

#define SIZE 10

void input(int *, int);

int get_most_frequent(int *, int);
int frequency(int *, int, int, int, int);

int main(int argc, char const *argv[])
{
    int arr[SIZE] = {0};
    input(arr, SIZE);
    int n = get_most_frequent(arr, SIZE);
    printf("%d", n);
    return 0;
}

void input(int *arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int get_most_frequent(int *arr, int size)
{
    int most_frequent;
    int most_count = 0;
    for (size_t i = 0; i < size; i++)
    {
        int current_count = frequency(arr, size, i, size, arr[i]);
        if (current_count > most_count)
        {
            most_frequent = arr[i];
            most_count = current_count;
        }
    }
    return most_frequent;
}

int frequency(int *arr, int size, int start, int end, int n)
{
    int count = 0;
    for (size_t i = start; i < end; i++)
    {
        if (arr[i] == n)
        {
            count++;
        }
    }
    return count;
}
