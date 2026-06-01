// Ввести целое число и определить, верно ли, что в нём ровно одна цифра «9».

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool contains_digit(int n, int digit)
{
    int last_digit;
    while (n > 0)
    {
        last_digit = n % 10;
        if (last_digit == digit)
        {
            return true;
        }
        n = n / 10;
    }
    return false;
}

bool has_repeating_digit(int n, int digit)
{
    int last_digit;
    while (n > 0)
    {
        last_digit = n % 10;
        if (last_digit == digit && contains_digit(n / 10, digit))
        {
            return true;
        }
        n = n / 10;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int n, last_digit;
    scanf("%d", &n);
    if ((n == 0) || has_repeating_digit(n, 9))
    {
        printf("NO");
        return EXIT_SUCCESS;
    }
    printf("YES");
    return EXIT_SUCCESS;
}
