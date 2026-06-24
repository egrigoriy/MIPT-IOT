// Дан целочисленный массив из 30 элементов.
// Элементы массива могут принимать произвольные целые значения помещающиеся в int.
// Необходимо создать функцию, которая находит и выводит в порядке возрастания номера двух элементов массива,
// сумма которых минимальна.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 30

void print_indexes(int size, int *arr);

void input(int size, int *arr)
{
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print(int size, int *arr)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    int arr[SIZE];
    input(SIZE, arr);
    print_indexes(SIZE, arr);
    return EXIT_SUCCESS;
}

void print_indexes(int size, int *a)
{
    int index1 = 0;
    int index2 = 1;
    int min_sum = a[index1] + a[index2];
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            int sum = a[i] + a[j];
            if (a[i] + a[j] < min_sum)
            {
                min_sum = sum;
                index1 = i;
                index2 = j;
            }
        }
    }
    printf("%d %d", index1, index2);
}