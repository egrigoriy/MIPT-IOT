// Написать только одну функцию, которая ставит в начало массива все четные элементы, а в конец – все нечетные.
// Не нарушайте порядок следования чисел между собой. Строго согласно прототипу:.
// void sort_even_odd(int n, int a[])

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define SIZE 20
void sort_even_odd(int n, int a[]);

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
    sort_even_odd(SIZE, arr);
    print(SIZE, arr);
    return EXIT_SUCCESS;
}

void sort_even_odd(int n, int a[])
{
    int result[n];
    for (size_t i = 0; i < n; i++)
    {
        result[i] = 0;
    }
    
    int even_index = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            result[even_index++] = a[i];
    }

    int odd_index = even_index;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            result[odd_index++] = a[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        a[i] = result[i];
    }
}