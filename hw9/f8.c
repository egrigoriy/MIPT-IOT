// В последовательности записаны целые числа от M до N ( M меньше N, M больше или равно 1) в произвольном порядке,
// но одно из чисел пропущено (остальные встречаются ровно по одному разу). N не превосходит 1000.
// Последовательность заканчивается числом 0. Определить пропущенное число.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1001

int min(int size, int *a);
int max(int size, int *a);
int missing(int m, int n, int size, int *a);
int contains(int size, int *a, int num);

void input(int size, int *a)
{
    int n;
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        a[i] = n;
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
    int numbers[SIZE] = {0};
    input(SIZE, numbers);
    int m = min(SIZE, numbers);
    int n = max(SIZE, numbers);
    printf("%d", missing(m, n, SIZE, numbers));
    return EXIT_SUCCESS;
}

int missing(int m, int n, int size, int *a)
{
    for (size_t num = m; num < n; num++)
    {
        for (size_t j = 0; j < size; j++)
        {
            if (!contains(size, a, num))
                return num;
        }
    }
    return 0;
}

int contains(int size, int *a, int num)
{
    int i = 0;
    while (i < size)
    {
        if (a[i] == num)
            return 1;
        if (a[i] == 0)
            break;
        i++;
    }
    return 0;
}

int min(int size, int *a)
{
    int i = 0;
    int min_el = a[0];
    while (a[i] > 0)
    {
        if (a[i] < min_el)
            min_el = a[i];
        i++;
    }
    return min_el;
}

int max(int size, int *a)
{
    int i = 0;
    int max_el = a[0];
    while (a[i] > 0)
    {
        if (a[i] > max_el)
            max_el = a[i];
        i++;
    }
    return max_el;
}