// Считать массив из 10 элементов и отсортировать первую половину по возрастанию, а вторую – по убыванию.

#include <stdio.h>
#include <inttypes.h>
#define SIZE 10

void input(int *, int);
void print(int *, int);
void sort(int *, int, int, int, int (*comparator)(int, int));

int greater(int, int);
int smaller(int, int);

int main(int argc, char const *argv[])
{
    int arr[SIZE];
    input(arr, SIZE);
    sort(arr, SIZE, 0, SIZE / 2, greater);
    sort(arr, SIZE, SIZE/2 , SIZE, smaller);
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

int greater(int a , int b) {
    return a - b;
}

int smaller(int a, int b) {
    return b - a;
}

void sort(int *arr, int size, int start, int end, int (*comparator)(int, int))
{
    for (size_t i = start; i < end; i++)
    {
        for (size_t j = i + 1; j < end; j++)
        {
            if (comparator(arr[i], arr[j]) > 0)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}