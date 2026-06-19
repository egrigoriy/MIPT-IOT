// Считать массив из 10 элементов и выделить в другой массив все числа, которые встречаются более одного раза. 
// В результирующем массиве эти числа не должны повторяться.

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

#define SIZE 10

void input(int *, int);
void print(int *, int);

void select(int *, int, int *);
bool contains(int *, int, int);

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
        if (contains(selected_arr, size, arr[i]))
            continue;
        for (size_t j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                selected_arr[selected_index] = arr[i];
                selected_index++;
                break;
            }
        }
    }
}

bool contains(int *arr, int size, int n)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            return true;
        }
    }
    return false;
}
