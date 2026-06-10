// Дано натуральное число N. Вычислите сумму его цифр. Необходимо составить рекурсивную функцию.
// int sum_digits(int n)

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int sum_digits(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", sum_digits(n));
    return EXIT_SUCCESS;
}

int sum_digits(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return n % 10 + sum_digits(n / 10);
}