// Составить рекурсивную функцию, печать всех простых множителей числа.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

void print_divisors(int n, int divisor);
void print_all_divisors(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    print_all_divisors(n);
    return EXIT_SUCCESS;
}

void print_divisors(int n, int divisor)
{
    if (divisor > n)
    {
        return;
    }
    if ((n % divisor) == 0)
    {
        printf("%d ", divisor);
        print_divisors(n / divisor, divisor);
    }
    else
    {
        print_divisors(n, divisor + 1);
    }
}

void print_all_divisors(int n)
{
    print_divisors(n, 2);
}