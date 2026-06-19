// Считать массив из 10 элементов и отобрать в другой массив все числа, у которых вторая с конца цифра (число десятков) – ноль.

#include <stdio.h>
#include <inttypes.h>
#define SIZE 10

void input(int *, int);
void print(int *, int);

void select(int *, int, int *);

int main(int argc, char const *argv[])
{
    int arr[SIZE] = {0};
    int selected_arr[SIZE] = {[0 ... SIZE - 1] = -1};
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
        if (arr[i] < 0)
            break;
        printf("%d ", arr[i]);
    }
}

void select(int *arr, int size, int *selected_arr)
{
    int selected_index = 0;
    for (size_t i = 0; i < size; i++)
    {
        if ((arr[i] < 10) || ((arr[i] / 10) % 10 == 0))
            {
                selected_arr[selected_index] = arr[i];
                selected_index++;
            }
    }
}