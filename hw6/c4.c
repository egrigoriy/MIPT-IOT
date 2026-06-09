// Описать функцию вычисления f(x) по формуле:
// f(x)= x*x при -2 ≤ x < 2;
// x*x+4x+5 при x ≥ 2;
// 4 при x < -2.
// Используя эту функцию для n заданных чисел, вычислить f(x). Среди вычисленных значений найти наибольшее.

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int f(int x);

int max_in_array(int *, int);

int main(void)
{
    int x = INT32_MAX;
    int max = INT32_MIN;
    while (x && scanf("%" SCNd32, &x))
    {
        int y = f(x);
        if (y > max)
        {
            max = y;
        }
    }
    printf("%" PRId32, max);
    return EXIT_SUCCESS;
}

int f(int x)
{
    if (x < -2)
        return 4;
    if ((x >= -2) && (x < 2))
        return x * x;
    return x * x + 4 * x + 5;
}
