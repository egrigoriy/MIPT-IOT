// Необходимо составить функцию, которая определяет, 
// сколько зерен попросил положить на N-ую клетку изобретатель шахмат (на 1-ую – 1 зерно, на 2-ую – 2 зерна, на 3-ю – 4 зерна, …)

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

uint64_t double_to(uint32_t);

int main(void)
{
    int n;
    scanf("%" SCNu32, &n);
    printf("%" PRIu64, double_to(n));
    return EXIT_SUCCESS;
}

uint64_t double_to(uint32_t n)
{
    uint64_t result = 1;
    for (size_t i = 2; i <= n; i++)
    {
        result *= 2;
    }
    return result;
}
