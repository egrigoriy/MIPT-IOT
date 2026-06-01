// Ввести целое число и определить, верно ли, что все его цифры четные.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool right_to_left_decreasing(int n)
{
    int last_digit;
    while (n > 0)
    {
        last_digit = n % 10;
        if ((last_digit % 2) != 0)
        {
            return false;
        }
        n = n / 10;
    }
    return true;
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
