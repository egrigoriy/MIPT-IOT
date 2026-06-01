// Организовать ввод натурального числа с клавиатуры.
// Программа должна определить наименьшую и наибольшую цифры, которые входят в состав данного натурального числа.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int cound_even_digits(int n)
{
    int max_digit = 0;
    while (n > 0)
    {
        int remainder = n % 10;
        if (remainder > max_digit)
        {
            max_digit = remainder;
        }
        n = n / 10;
    }
    return max_digit;
}

int min_digit(int n)
{
    int min_digit = n;
    while (n > 0)
    {
        int remainder = n % 10;
        if (remainder < min_digit)
        {
            min_digit = remainder;
        }
        n = n / 10;
    }
    return min_digit;
}

int main(int argc, char const *argv[])
{
    int n, last_digit;
    scanf("%d", &n);
    printf("%d %d", min_digit(n), cound_even_digits(n));
    return EXIT_SUCCESS;
}
