// Составить функцию логическую функцию, которая определяет, верно ли, что число простое. Используя функцию решить задачу. int is_prime(int n)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>

bool is_prime(int n);

int main(void)
{
    int n;
    scanf("%" SCNu32, &n);
    if (is_prime(n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return EXIT_SUCCESS;
}

bool is_prime(int n)
{
    if (n < 2)
        return false;
    for (size_t i = 2; i * i < n; i++)
    {
        if ((n % i) == 0)
            return false;
    }
    return true;
}
