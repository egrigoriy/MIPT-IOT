// Написать только одну логическую функцию, которая определяет, верно ли, что среди элементов массива есть два одинаковых.
// Если ответ «да», функция возвращает 1; если ответ «нет», то 0. Строго согласно прототипу:
// int is_two_same(int size, int a[]);

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int is_two_same(int size, int a[]);

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
    unsigned long n;
    scanf("%d", &n);
    
    return EXIT_SUCCESS;
}

int is_two_same(int size, int a[])
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
                return 1;
        }
    }
    return 0;
}