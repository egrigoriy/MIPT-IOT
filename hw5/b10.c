// Ввести целое число и определить, верно ли, что все его цифры четные.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_right_digit_smaller_than(int n, int a)
{
    if (n == 0)
    {
        return true;
    }
    int right_digit = n % 10;
    return (a > right_digit) && is_right_digit_smaller_than(n / 10, right_digit);
}

bool right_to_left_decreasing(int n)
{
    return is_right_digit_smaller_than(n / 10, n % 10);
}

int main(int argc, char const *argv[])
{
    int n, last_digit;
    scanf("%d", &n);
    if (right_to_left_decreasing(n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return EXIT_SUCCESS;
}
