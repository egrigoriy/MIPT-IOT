// Организовать ввод натурального числа с клавиатуры.
// Программа должна определить наименьшую и наибольшую цифры, которые входят в состав данного натурального числа.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    if (a < b) {
        return gcd(a, b - a);
    }
    return gcd(a - b, b);
}

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", gcd(a, b));
    return EXIT_SUCCESS;
}
