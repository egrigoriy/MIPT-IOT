// Ввести целое число и найти сумму его цифр.

#include <stdio.h>
#include <stdlib.h>

int sum_digits(int n, int acc) {
    if (n == 0) {
        return acc;
    }
    return sum_digits(n / 10, acc + n % 10);
}

int main(int argc, char const *argv[])
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", sum_digits(n, 0));
    return EXIT_SUCCESS;
}