// Составить логическую функцию, которая определяет, верно ли, что в заданном числе сумма цифр равна произведению.
// int is_happy_number(int n)

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int is_happy_number(int n);
int sum_digits(int n);
int mult_digits(int n);

int main(void)
{
    int n;

    scanf("%" SCNu32, &n);

    if (is_happy_number(n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return EXIT_SUCCESS;
}

int is_happy_number(int n)
{
    return sum_digits(n) == mult_digits(n);
}


int reduce(int start, int (*func)(int, int), int n)
{
    int result = start;
    while (n > 0)
    {
        result = func(result, n % 10);
        n = n / 10;
    }
    return result;
}

int add(int a, int b)
{
    return a + b;
}

int mult(int a, int b)
{
    return a * b;
}

int sum_digits(int n) {
    return reduce(0, add, n);
}

int mult_digits(int n) {
    return reduce(1, mult, n);
}

