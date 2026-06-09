// Составить функцию вычисления N!. Использовать ее при вычислении факториала int factorial(int n)

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int factorial(int n);

int main(void)
{
    int n;
    scanf("%" SCNu32, &n);
    printf("%" PRIu64, factorial(n));
    return EXIT_SUCCESS;
}

int factorial(int n)
{
    int result = 1;
    for (size_t i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
