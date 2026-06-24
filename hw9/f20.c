// Дан целочисленный массив из 10 элементов. Необходимо определить количество четных и нечетных чисел.
// Если количество чётных чисел больше, чем количество нечётных,
// заменить каждое нечетное число на произведение нечетных цифр в его десятичной записи.
// Если количество нечётных чисел больше или равно количеству чётных,
// заменить каждое чётное число на произведение чётных цифр в его десятичной записи.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 10

void django(int size, int *a);
bool is_even(int n);
bool is_odd(int n);
int mult_digits(int n, bool (*predicate)(int n));
void replace(int size, int *a, bool (*predicate)(int n));

void input(int size, int *arr)
{
    for (size_t i = 0; i < size; i++)
    {
        if (scanf("%d", &arr[i]) < 0)
        {
            break;
        }
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
    int arr[SIZE] = {0};
    input(SIZE, arr);
    django(SIZE, arr);
    print(SIZE, arr);
    return EXIT_SUCCESS;
}

void django(int size, int *a)
{
    int count_even = 0;
    int count_odd = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
            count_even++;
        else
            count_odd++;
    }
    if (count_even > count_odd)
    {
        replace(size, a, is_odd);
    }
    else
    {
        replace(size, a, is_even);
    }
}

int mult_digits(int n, bool (*predicate)(int n))
{
    int result = 1;
    while (n > 0)
    {
        if (predicate(n))
        {
            result *= n % 10;
        }
        n = n / 10;
    }
    return result;
}

void replace(int size, int *a, bool (*predicate)(int n))
{
    for (size_t i = 0; i < size; i++)
    {
        if (predicate(a[i]))
        {
            a[i] = mult_digits(a[i], predicate);
        }
    }
}

bool is_even(int n)
{
    return n % 2 == 0;
}
bool is_odd(int n)
{
    return n % 2 != 0;
}