// Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int double(int);

int main(void)
{
    int n;
    scanf("%" SCNd32, &n);
    printf("%" PRIu32, double(n));
    return EXIT_SUCCESS;
}

int double(int n)
{
    int result = 0;
    for (size_t i = 1; i <= n; i++)
    {
        result += i;
    }
    return result;
}
