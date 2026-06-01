// Ввести натуральное число и определить, верно ли, что сумма его цифр равна 10.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int sum_digits(int n, int acc)
{
    if (n == 0)
    {
        return acc;
    }
    return sum_digits(n / 10, acc + n % 10);
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    if (sum_digits(n, 0) == 10)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return EXIT_SUCCESS;
}
