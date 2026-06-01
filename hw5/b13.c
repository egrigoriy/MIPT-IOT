// Организовать ввод натурального числа с клавиатуры.
// Программа должна определить наименьшую и наибольшую цифры, которые входят в состав данного натурального числа.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_even(int n)
{
    return n % 2 == 0;
}

bool is_odd(int n)
{
    return !is_even(n);
}

int count_digits(int n, bool (*predicate)(int))
{
    int count = 0;
    while (n > 0)
    {
        int remainder = n % 10;
        if (predicate(remainder))
        {
            count++;
        }
        n = n / 10;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int n, last_digit;
    scanf("%d", &n);
    printf("%d %d", count_digits(n, is_even), count_digits(n, is_odd));
    return EXIT_SUCCESS;
}
