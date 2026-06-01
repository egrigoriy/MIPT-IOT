// Ввести натурально число и напечатать все числа от 10 до введенного числа - у которых сумма цифр равна произведению цифр

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (size_t i = 10; i <= n; i++)
    {
        if (sum_digits(i) == mult_digits(i))
        {
            printf("%d ", i);
        }
    }
    return EXIT_SUCCESS;
}
