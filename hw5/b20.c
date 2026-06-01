// Проверить число на простоту.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int is_prime(int n)
{
    if (n == 1) {
        return false;
    }
    for (size_t i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
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
