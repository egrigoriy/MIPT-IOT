// Составить функцию, печать всех простых множителей числа. Использовать ее для печати всех простых множителей числа. void print_simple(int n)

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

void print_simple(int n);

int main(void)
{
    int n;
    scanf("%" SCNu32, &n);
    print_simple(n);
    return EXIT_SUCCESS;
}

void print_simple(int n)
{
    int i = 2;
    while (i <= n)
    {
        while ((n % i) == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
        i++;    
    }
}
