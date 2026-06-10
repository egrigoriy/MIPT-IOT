// Дано натуральное число N. Посчитать количество «1» в двоичной записи числа.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int count_ones_binary(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", count_ones_binary(n));
    return EXIT_SUCCESS;
}

int count_ones_binary(int n) {
    if (n <= 0) {
        return 0;
    }
    int counter = ((n % 2) != 0) ? 1 : 0;
    return counter + count_ones_binary(n / 2);
}