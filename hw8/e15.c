// Считать 10 чисел в диапазоне от -500 до 500 и разложить по двум массивам:
// в одни помещать только положительные, во второй - только отрицательные. Числа, равные нулю, игнорировать.
// Вывести на экран все элементы обоих массивов.

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>

#define SIZE 10

void input(int *, int);
void print(int *, int);
bool is_positive(int);
bool is_negative(int);
void select(int *, int, int *, bool (*predicate)(int));

int main(int argc, char const *argv[])
{
    int arr[SIZE] = {0};
    int positives_arr[SIZE] = {0};
    int negatives_arr[SIZE] = {0};
    input(arr, SIZE);
    select(arr, SIZE, positives_arr, is_positive);
    select(arr, SIZE, negatives_arr, is_negative);
    print(positives_arr, SIZE);
    print(negatives_arr, SIZE);
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
        if (arr[i] == 0)
            break;
        printf("%d ", arr[i]);
    }
}

bool is_positive(int n)
{
    return n > 0;
}

bool is_negative(int n)
{
    return n < 0;
}

void select(int *arr, int size, int *selected_arr, bool (*predicate)(int))
{
    int selected_index = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (predicate(arr[i]))
        {
            selected_arr[selected_index] = arr[i];
            selected_index++;
        }
    }
}
