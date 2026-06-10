// Написать рекурсивную функцию возведения целого числа n в степень p.
// int recurs_power(int n, int p)
// Используя данную функцию, решить задачу.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int recurs_power(int n, int p);

int main(void)
{
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d", recurs_power(n, p));
    return EXIT_SUCCESS;
}

int recurs_power(int n, int p)
{
    if (p == 0)
        return 1;
    return n * recurs_power(n, p - 1);
}