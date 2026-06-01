// Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int count_digits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

int reverse(int n)
{
    if (n < 10)
    {
        return n;
    }
    int last_digit = n % 10;
    int left_side = n / 10;
    int k = count_digits(left_side);
    return last_digit * pow(10, k) + reverse(left_side);
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%d", reverse(n));
    return EXIT_SUCCESS;
}
