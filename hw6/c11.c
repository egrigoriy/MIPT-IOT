// Составить функцию, которая определяет наибольший общий делитель двух натуральных и привести пример ее использования. int nod(int a, int b)
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int nod(int a, int b);

int main(void)
{
    int a, b;
    scanf("%" SCNd32 "%" SCNd32, &a, &b);
    printf("%" PRId32, nod(a, b));
    return EXIT_SUCCESS;
}

int nod(int a, int b)
{
    if (a == b)
        return b;
    if (a > b)
        return nod(a - b, b);
    return nod(a, b - a);
}